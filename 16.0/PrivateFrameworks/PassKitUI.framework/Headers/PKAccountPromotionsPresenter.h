// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTPROMOTIONSPRESENTER_H
#define PKACCOUNTPROMOTIONSPRESENTER_H

@class PKRemoteImagePreparer;
@protocol PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKAccountPromotionsPresenter : NSObject {
    PKRemoteImagePreparer *_remoteImagePreparer;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
}




-(id)initWithRemoteImagePreparer:(id)arg0 delegate:(id)arg1 ;
-(void)configureCell:(id)arg0 withPromotion:(id)arg1 ;
-(void)dispatchActionForLink:(id)arg0 linkedApplication:(id)arg1 promotion:(id)arg2 ;


@end


#endif