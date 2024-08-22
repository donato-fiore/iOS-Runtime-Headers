// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKAPPLERATINGSVIEWCONTROLLER_H
#define MKAPPLERATINGSVIEWCONTROLLER_H

@class NSArray, UIStackView, NSString;
@protocol MKModuleViewControllerProtocol;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionRowView.h"
#import "MKOverallRatingHeaderView.h"

@interface MKAppleRatingsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>

 {
    NSArray *_ratingCategories;
    MKPlaceSectionRowView *_containerView;
    MKOverallRatingHeaderView *_overallHeaderView;
    UIStackView *_ratingCategoryStackView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)initWithAppleRatings:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif