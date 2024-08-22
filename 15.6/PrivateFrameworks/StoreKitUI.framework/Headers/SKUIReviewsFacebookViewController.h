// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREVIEWSFACEBOOKVIEWCONTROLLER_H
#define SKUIREVIEWSFACEBOOKVIEWCONTROLLER_H

@class UIViewController;
@protocol SKUIReviewsFacebookViewControllerDelegate;


#import "SKUIReviewsFacebookView.h"
#import "SKUIClientContext.h"
#import "SKUIFacebookLikeStatus.h"

@interface SKUIReviewsFacebookViewController : UIViewController {
    SKUIReviewsFacebookView *_facebookView;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (weak, nonatomic) NSObject<SKUIReviewsFacebookViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // ivar: _facebookLikeStatus


-(void)_changeStatusToUserLiked:(BOOL)arg0 ;
-(void)_reloadFacebookView;
-(void)_toggleLike:(id)arg0 ;
-(void)dealloc;
-(void)loadView;


@end


#endif