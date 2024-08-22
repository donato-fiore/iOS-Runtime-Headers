// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOMPOSEREVIEWFORMVIEWCONTROLLER_H
#define SKUICOMPOSEREVIEWFORMVIEWCONTROLLER_H

@class SUViewController, NSString;
@protocol SKUIComposeReviewViewDelegate, SKUIComposeReviewFormDelegate;


#import "SKUIComposeReviewView.h"
#import "SKUIReviewMetadata.h"

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate>

 {
    SKUIComposeReviewView *_composeView;
    SKUIReviewMetadata *_review;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIComposeReviewFormDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReviewMetadata:(id)arg0 ;
-(void)_cancel;
-(void)_submit;
-(void)composeReviewViewValidityChanged:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)setRating:(float)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif