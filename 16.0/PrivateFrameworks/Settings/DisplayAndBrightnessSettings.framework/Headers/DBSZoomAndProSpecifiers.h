// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSZOOMANDPROSPECIFIERS_H
#define DBSZOOMANDPROSPECIFIERS_H

@class NSMutableArray, PSSpecifier, NSArray;
@protocol DBSZoomAndProSpecifiersDelegate;

#import <Foundation/Foundation.h>


@interface DBSZoomAndProSpecifiers : NSObject {
    NSMutableArray *_specifiers;
}


@property (weak, nonatomic) NSObject<DBSZoomAndProSpecifiersDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PSSpecifier *fineTuneSpecifier; // ivar: _fineTuneSpecifier
@property (readonly, nonatomic) PSSpecifier *proModeSwitchSpecifier; // ivar: _proModeSwitchSpecifier
@property (readonly, nonatomic) NSArray *specifiers;


+(BOOL)specifiersPresentIn:(id)arg0 ;
+(void)removeSpecifiersFrom:(id)arg0 ;
-(id)getProModeEnabled:(id)arg0 ;
-(id)localizedMagnifyModeName;
-(void)presentModalFineTuneController;
-(void)presentModalMagnifyController;
-(void)setProModeEnabled:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif