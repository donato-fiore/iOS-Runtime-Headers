// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTRICONTENTUNAVAILABLEHOSTABLEVIEWCONTROLLER_H
#define TTRICONTENTUNAVAILABLEHOSTABLEVIEWCONTROLLER_H

@class UIViewController;


#import "TTRIContentUnavailableConfiguration.h"
#import "TTRIContentUnavailableConfigurationState.h"

@interface TTRIContentUnavailableHostableViewController : UIViewController

@property (copy, nonatomic, setter=ttr_setContentUnavailableConfiguration:) TTRIContentUnavailableConfiguration *ttr_contentUnavailableConfiguration;
@property (readonly, nonatomic) TTRIContentUnavailableConfigurationState *ttr_contentUnavailableConfigurationState;


-(id)_contentUnavailableConfiguration;
-(id)_contentUnavailableConfigurationState;
-(void)_setContentUnavailableConfiguration:(id)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)ttr_setNeedsUpdateContentUnavailableConfiguration;
-(void)ttr_updateContentUnavailableConfigurationUsingState:(id)arg0 ;


@end


#endif