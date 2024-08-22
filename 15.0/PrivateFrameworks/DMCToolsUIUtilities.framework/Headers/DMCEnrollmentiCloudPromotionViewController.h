// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTICLOUDPROMOTIONVIEWCONTROLLER_H
#define DMCENROLLMENTICLOUDPROMOTIONVIEWCONTROLLER_H

@class NSString;
@protocol DMCEnrollmentiCloudPromotionViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentiCloudPromotionViewController : DMCEnrollmentTemplateTableViewController

@property (weak) NSObject<DMCEnrollmentiCloudPromotionViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *quotaString; // ivar: _quotaString
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 delegate:(id)arg1 ;
-(void)_setupBottomViewForType:(NSUInteger)arg0 ;
-(void)_setupUIForType:(NSUInteger)arg0 ;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif