// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGSNAPPINGFEEDBACKGENERATORCONFIGURATION_H
#define _UIDRAGSNAPPINGFEEDBACKGENERATORCONFIGURATION_H

@class UIDragFeedbackGeneratorConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UIDragSnappingFeedbackGeneratorConfiguration : UIDragFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback; // ivar: _objectSnappedFeedback


+(id)defaultConfiguration;
-(id)feedbackKeyPaths;


@end


#endif