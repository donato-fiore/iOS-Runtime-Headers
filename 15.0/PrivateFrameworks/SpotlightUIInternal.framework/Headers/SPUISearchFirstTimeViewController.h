// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUISEARCHFIRSTTIMEVIEWCONTROLLER_H
#define SPUISEARCHFIRSTTIMEVIEWCONTROLLER_H

@class SearchUIFirstTimeExperienceViewController, UIView;



@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController

@property (retain) UIView *contentView; // ivar: _contentView
@property BOOL hasBeenDisplayed; // ivar: _hasBeenDisplayed


+(BOOL)needsDisplay;
+(NSInteger)viewCount;
+(void)dismissForever;
+(void)updateViewCountToCount:(NSInteger)arg0 ;
-(CGFloat)idealContentHeight;
-(id)initWithDomains:(id)arg0 explanationText:(id)arg1 learnMoreText:(id)arg2 continueButtonTitle:(id)arg3 ;
-(void)updateViewCount;


@end


#endif