// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSMUTABLESCENESETTINGS_H
#define FBSMUTABLESCENESETTINGS_H



#import "FBSSceneSettings.h"

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) CGRect frame;
@property (nonatomic) NSInteger interfaceOrientation;
@property (nonatomic) NSInteger interruptionPolicy;
@property (nonatomic) CGFloat level;


+(BOOL)_isMutable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)ignoreOcclusionReasons;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)otherSettings;
-(id)transientLocalSettings;
-(void)_setDisplayConfiguration:(id)arg0 ;
-(void)setActivityMode:(char)arg0 ;
-(void)setDisplayConfiguration:(id)arg0 ;
-(void)setJetsamMode:(char)arg0 ;
-(void)setOccluded:(BOOL)arg0 ;


@end


#endif