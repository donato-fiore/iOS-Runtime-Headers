// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENESETTINGS_H
#define FBSSCENESETTINGS_H

@class BSSettings, NSSet, NSString;
@protocol BSDebugDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "FBSDisplayConfiguration.h"
#import "FBSDisplayIdentity.h"

@interface FBSSceneSettings : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying>

 {
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
    BOOL _prefersProcessTaskSuspensionWhileSceneForeground;
    char _activityMode;
    char _jetsamMode;
    NSInteger _isOccluded;
    BOOL _occluded;
    NSSet *_ignoreOcclusionReasons;
}


@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground; // ivar: _foreground
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) NSInteger interruptionPolicy; // ivar: _interruptionPolicy
@property (readonly, nonatomic) CGFloat level; // ivar: _level
@property (readonly) Class superclass;


+(BOOL)_isMutable;
+(id)settings;
-(BOOL)appendDescriptionToBuilder:(id)arg0 forFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIgnoringOcclusions;
-(BOOL)isOccluded;
-(BOOL)prefersProcessTaskSuspensionWhileSceneForeground;
-(BOOL)settings:(id)arg0 appendDescriptionToBuilder:(id)arg1 forFlag:(NSInteger)arg2 object:(id)arg3 ofSetting:(NSUInteger)arg4 ;
-(char)activityMode;
-(char)jetsamMode;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg0 debug:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)ignoreOcclusionReasons;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)occlusions;
-(id)otherSettings;
-(id)settings:(id)arg0 keyDescriptionForSetting:(NSUInteger)arg1 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transientLocalSettings;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(struct CGRect )bounds;
-(void)dealloc;
-(void)setPrefersProcessTaskSuspensionWhileSceneForeground:(BOOL)arg0 ;


@end


#endif