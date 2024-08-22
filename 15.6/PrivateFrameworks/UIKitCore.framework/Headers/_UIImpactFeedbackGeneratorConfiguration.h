// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMPACTFEEDBACKGENERATORCONFIGURATION_H
#define _UIIMPACTFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UIImpactFeedbackGeneratorConfiguration : UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback; // ivar: _feedback
@property (copy, nonatomic) id *feedbackUpdateBlock; // ivar: _feedbackUpdateBlock
@property (nonatomic) CGFloat minimumInterval; // ivar: _minimumInterval


+(id)defaultConfiguration;
+(id)lightConfiguration;
+(id)rigidConfiguration;
+(id)softConfiguration;
+(id)strongConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)requiredSupportLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif