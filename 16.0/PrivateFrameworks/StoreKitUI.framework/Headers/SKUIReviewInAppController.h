// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREVIEWINAPPCONTROLLER_H
#define SKUIREVIEWINAPPCONTROLLER_H

@class NSString;
@protocol SKUIComposeReviewDelegate;

#import <Foundation/Foundation.h>

#import "SKUIComposeReviewViewController.h"
#import "SKUIReviewInAppConfiguration.h"
#import "SKUIStoreDialogController.h"
#import "SKUIReviewInAppRatingViewController.h"
#import "SKUIProductReviewURLProvider.h"
#import "SKUIStarRatingQueue.h"

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) SKUIComposeReviewViewController *composeViewController; // ivar: _composeViewController
@property (copy, nonatomic) SKUIReviewInAppConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SKUIStoreDialogController *dialogController; // ivar: _dialogController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIReviewInAppRatingViewController *ratingViewController; // ivar: _ratingViewController
@property (retain, nonatomic) SKUIProductReviewURLProvider *reviewURLProvider; // ivar: _reviewURLProvider
@property (retain, nonatomic) SKUIStarRatingQueue *starRatingQueue; // ivar: _starRatingQueue
@property (readonly) Class superclass;


-(BOOL)composeReviewViewController:(id)arg0 shouldSubmitReview:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_composeReviewViewControllerDidFinish:(id)arg0 result:(NSUInteger)arg1 ;
-(void)_finishWithResult:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_presentAlertForDialog:(id)arg0 ;
-(void)_presentRatingPrompt;
-(void)_presentWriteReview;
-(void)_promptForStarRatingDuringCompose:(id)arg0 ;
-(void)_submitRating:(NSInteger)arg0 completion:(id)arg1 ;
-(void)composeReviewViewController:(id)arg0 didFailWithDialog:(id)arg1 ;
-(void)composeReviewViewController:(id)arg0 presentDialog:(id)arg1 ;
-(void)composeReviewViewControllerDidCancel:(id)arg0 ;
-(void)composeReviewViewControllerDidSubmit:(id)arg0 ;
-(void)start;


@end


#endif