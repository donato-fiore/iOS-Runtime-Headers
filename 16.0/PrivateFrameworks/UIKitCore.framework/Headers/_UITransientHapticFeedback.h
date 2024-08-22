// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITRANSIENTHAPTICFEEDBACK_H
#define _UITRANSIENTHAPTICFEEDBACK_H

@class UIFeedback, NSString;
@protocol _UIFeedbackDiscretePlayable, _UIFeedbackTransientHaptic_Internal, _UIFeedbackCoreHapticsPlayerReuse_Internal;



@interface _UITransientHapticFeedback : UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackTransientHaptic_Internal, _UIFeedbackCoreHapticsPlayerReuse_Internal>



@property (readonly, nonatomic) BOOL canReuseCoreHapticsPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority; // ivar: _highPriority
@property (readonly, nonatomic) float intensity; // ivar: _intensity
@property (readonly, nonatomic) float sharpness; // ivar: _sharpness
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)transientHapticFeedbackWithIntensity:(float)arg0 sharpness:(float)arg1 ;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_effectivePlayableFeedbackTypes;
-(id)_playableProtocol;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif