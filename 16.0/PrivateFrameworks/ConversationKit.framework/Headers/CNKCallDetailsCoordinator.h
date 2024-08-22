// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKCALLDETAILSCOORDINATOR_H
#define CNKCALLDETAILSCOORDINATOR_H

@protocol CNKConversationHUDDetailsViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNKCallDetailsCoordinator : NSObject <CNKConversationHUDDetailsViewControllerDelegate>

 {
    ? hostViewController;
    ? deferredPresentationManager;
    ? controlsManager;
    ? detailsNavigationController;
}


@property (nonatomic, readonly) BOOL isCaptioningEnabled;


-(id)init;
-(id)initWithHostViewController:(id)arg0 controlsManager:(id)arg1 deferredPresentationManager:(id)arg2 ;
-(void)startWithReason:(id)arg0 ;
-(void)stopWithReason:(id)arg0 ;
-(void)wantsDismissal;


@end


#endif