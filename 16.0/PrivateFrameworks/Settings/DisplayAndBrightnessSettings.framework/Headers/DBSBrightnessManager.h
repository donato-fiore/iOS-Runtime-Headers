// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSBRIGHTNESSMANAGER_H
#define DBSBRIGHTNESSMANAGER_H

@class CBClient, PSListController, NSMutableArray;

#import <Foundation/Foundation.h>


@interface DBSBrightnessManager : NSObject

@property (retain, nonatomic) CBClient *brightnessClient; // ivar: _brightnessClient
@property (weak, nonatomic) PSListController *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *specifiers; // ivar: _specifiers


+(BOOL)specifiersPresentIn:(id)arg0 ;
+(id)defaultManager;
+(void)removeSpecifiersFrom:(id)arg0 ;
-(id)_generateMainBrightnessSpecifier;
-(id)backlightValue:(id)arg0 ;
-(id)getAutoWhiteBalanceEnabled:(id)arg0 ;
-(id)init;
-(id)mainDisplayBrightnessSpecifiers;
-(void)_cleanupTransactionRef;
-(void)brightnessChangedExternally;
-(void)dealloc;
-(void)handleBrightnessChangedNotification:(id)arg0 ;
-(void)setAutoWhiteBalanceEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setBacklightValue:(id)arg0 specifier:(id)arg1 ;
// -(void)showAlertToDisableAccessibilityFilters:(id)arg0 cancel:(unk)arg1  ;


@end


#endif