// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERKEYBOARDSUPPRESSIONMODE_H
#define SBSWITCHERKEYBOARDSUPPRESSIONMODE_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface SBSwitcherKeyboardSuppressionMode : NSObject

@property (readonly, nonatomic) NSSet *appLayouts; // ivar: _appLayouts
@property (nonatomic) BOOL applyAssertionEvenIfAppIsHostingTheKeyboard; // ivar: _applyAssertionEvenIfAppIsHostingTheKeyboard
@property (nonatomic) NSInteger type; // ivar: _type


+(id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)arg0 ;
+(id)suppressionModeForAllScenes;
+(id)suppressionModeNone;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)suppressesAllScenes;
-(BOOL)suppressesNoScenes;
-(BOOL)suppressesSwitcherScenesOnly;
-(NSUInteger)hash;
-(id)_initWithAppLayouts:(id)arg0 suppressionType:(NSInteger)arg1 ;


@end


#endif