// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIIMPACTFEEDBACKGENERATOR_H
#define UIIMPACTFEEDBACKGENERATOR_H



#import "UIFeedbackGenerator.h"
#import "_UIImpactFeedbackGeneratorConfiguration.h"

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator {
    NSInteger _style;
}


@property (readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;


+(Class)_configurationClass;
-(id)_stats_key;
-(id)_styleString;
-(id)_ui_descriptionBuilder;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
-(void)_impactOccurredWithIntensity:(CGFloat)arg0 ;
-(void)impactOccurred;
-(void)impactOccurredWithIntensity:(CGFloat)arg0 ;


@end


#endif