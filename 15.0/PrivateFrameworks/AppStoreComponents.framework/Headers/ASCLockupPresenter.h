// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCLOCKUPPRESENTER_H
#define ASCLOCKUPPRESENTER_H

@class AMSPromise;
@protocol ASCLockupPresenterObserver, ASCLockupPresenterView;

#import <Foundation/Foundation.h>

#import "ASCPresenterContext.h"
#import "ASCLockupViewGroup.h"
#import "ASCLockup.h"
#import "ASCAppearMetricsPresenter.h"
#import "ASCOfferPresenter.h"
#import "ASCSignpostSpan.h"
#import "ASCLockupRequest.h"

@interface ASCLockupPresenter : NSObject

@property (readonly, nonatomic) ASCPresenterContext *context; // ivar: _context
@property (retain, nonatomic) ASCLockupViewGroup *group; // ivar: _group
@property (copy, nonatomic) ASCLockup *lockup; // ivar: _lockup
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter; // ivar: _metricsPresenter
@property (weak, nonatomic) NSObject<ASCLockupPresenterObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter; // ivar: _offerPresenter
@property (retain, nonatomic) AMSPromise *pendingRequestedLockup; // ivar: _pendingRequestedLockup
@property (retain, nonatomic) ASCSignpostSpan *pendingViewRender; // ivar: _pendingViewRender
@property (readonly, nonatomic) BOOL prefersRightToLeftViewLayout;
@property (copy, nonatomic) ASCLockupRequest *request; // ivar: _request
@property (nonatomic) BOOL showsPlaceholderContent; // ivar: _showsPlaceholderContent
@property (readonly, weak, nonatomic) NSObject<ASCLockupPresenterView> *view; // ivar: _view
@property (copy, nonatomic) id *viewRenderSpanProvider; // ivar: _viewRenderSpanProvider


-(BOOL)retryRequestIfNeeded;
-(id)description;
-(id)initWithView:(id)arg0 offerPresenter:(id)arg1 metricsPresenter:(id)arg2 ;
-(id)initWithView:(id)arg0 offerPresenter:(id)arg1 metricsPresenter:(id)arg2 context:(id)arg3 ;
-(void)beginViewRender;
-(void)clearContent;
-(void)daemonDidRebootstrap:(id)arg0 ;
-(void)dealloc;
-(void)endViewRender;
-(void)iconArtwork:(id)arg0 didFailFetchWithError:(id)arg1 ;
-(void)iconArtwork:(id)arg0 didFetchImage:(id)arg1 ;
-(void)performFollowUpWork:(id)arg0 ;
-(void)performIconFetch;
-(void)performLockupFetch;
-(void)reloadDefaultContent;
-(void)request:(id)arg0 didCompleteWithLockup:(id)arg1 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestWillFetchLockup:(id)arg0 ;
-(void)retryGroup:(id)arg0 ;
-(void)showPlaceholderContent;


@end


#endif