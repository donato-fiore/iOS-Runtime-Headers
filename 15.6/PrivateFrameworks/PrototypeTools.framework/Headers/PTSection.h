// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTSECTION_H
#define PTSECTION_H

@class NSArray, NSMutableArray, NSPredicate, NSString;
@protocol PTSettingsKeyPathObserver, PTRowObserver, PTModuleComponent, PTComponentObserver;

#import <Foundation/Foundation.h>

#import "PTSettings.h"

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver, PTModuleComponent>

 {
    NSArray *_rows;
    NSMutableArray *_enabledRows;
    BOOL _enabledSection;
}


@property (readonly, nonatomic) NSArray *allSections;
@property (retain, nonatomic) NSPredicate *appearancePredicate; // ivar: _appearancePredicate
@property (retain, nonatomic) NSString *childSettingsKeyPath; // ivar: _childSettingsKeyPath
@property (weak, nonatomic) NSObject<PTComponentObserver> *componentObserver; // ivar: _componentObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *enabledSections;
@property (copy, nonatomic) id *footerTextGetter; // ivar: _footerTextGetter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PTSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *unregisterBlock; // ivar: _unregisterBlock


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEnableRow:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfRow:(id)arg0 ;
-(NSUInteger)numberOfRows;
-(id)_remoteEditingWhitelistedComponent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRows:(id)arg0 ;
-(id)rowAtIndex:(NSUInteger)arg0 ;
-(void)_recomputeEnabledSection;
-(void)_reloadEnabledRows;
-(void)_sendInserts:(id)arg0 deletes:(id)arg1 ;
-(void)_sendReload;
-(void)_updateEnabledRows;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadSection;
-(void)rowDidReload:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;


@end


#endif