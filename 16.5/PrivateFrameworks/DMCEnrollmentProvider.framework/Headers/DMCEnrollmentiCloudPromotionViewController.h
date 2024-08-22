// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTICLOUDPROMOTIONVIEWCONTROLLER_H
#define DMCENROLLMENTICLOUDPROMOTIONVIEWCONTROLLER_H

@class NSString;
@protocol DMCDismissalAwareViewController, DMCEnrollmentiCloudPromotionViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentiCloudPromotionViewController : DMCEnrollmentTemplateTableViewController <DMCDismissalAwareViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DMCEnrollmentiCloudPromotionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *quotaString; // ivar: _quotaString
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 delegate:(id)arg1 ;
-(void)_setupBottomViewForType:(NSUInteger)arg0 ;
-(void)_setupUIForType:(NSUInteger)arg0 ;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)viewControllerHasBeenDismissed;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif