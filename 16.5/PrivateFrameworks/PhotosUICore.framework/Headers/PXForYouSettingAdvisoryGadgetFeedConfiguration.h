// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUSETTINGADVISORYGADGETFEEDCONFIGURATION_H
#define PXFORYOUSETTINGADVISORYGADGETFEEDCONFIGURATION_H



#import "PXFeedConfiguration.h"

@interface PXForYouSettingAdvisoryGadgetFeedConfiguration : PXFeedConfiguration



-(BOOL)allowsPopOnEmptyBehavior;
-(BOOL)wantsEmbeddedScrollView;
-(BOOL)wantsMultilineGadgetTitle;
-(NSInteger)horizontalGadgetStyle;
-(NSUInteger)gadgetAccessoryButtonType;
-(NSUInteger)gadgetType;
-(id)gadgetAccessoryButtonLocalizedTitle;
-(id)gadgetLocalizedTitle;
-(id)init;


@end


#endif