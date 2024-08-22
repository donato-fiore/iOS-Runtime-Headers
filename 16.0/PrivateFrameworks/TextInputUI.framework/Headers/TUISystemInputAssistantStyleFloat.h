// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUISYSTEMINPUTASSISTANTSTYLEFLOAT_H
#define TUISYSTEMINPUTASSISTANTSTYLEFLOAT_H

@class UIImageSymbolConfiguration, UIColor;
@protocol TUISystemInputAssistantStyle;

#import <Foundation/Foundation.h>


@interface TUISystemInputAssistantStyleFloat : NSObject <TUISystemInputAssistantStyle>



@property (readonly, nonatomic) UIImageSymbolConfiguration *barButtonImageSymbolConfiguration;
@property (readonly, nonatomic) CGFloat barButtonWidth;
@property (readonly, nonatomic) BOOL clipsToBounds;
@property (readonly, nonatomic) BOOL drawsPredictionBackdropView;
@property (readonly, nonatomic) BOOL enableButtonTintColor;
@property (readonly, nonatomic) CGFloat highlightCornerRadius;
@property (readonly, nonatomic) CGFloat highlightMargin;
@property (readonly, nonatomic) CGFloat minimumInterBarItemSpace;
@property (readonly, nonatomic) UIColor *predictionHighlightColor;
@property (readonly, nonatomic) UIColor *predictionSeparatorColor;
@property (readonly, nonatomic) CGFloat separatorMargin;
@property (readonly, nonatomic) BOOL shouldAnimatePredictionCandidate;
@property (readonly, nonatomic) BOOL useContinuousCornerInHighlight;




@end


#endif