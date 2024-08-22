// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBFLOWCONTROLLER_H
#define AMSUIWEBFLOWCONTROLLER_H

@class NSString, NSLock, NSMutableSet;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"
#import "AMSUIWebContainerViewController.h"

@interface AMSUIWebFlowController : NSObject

@property (readonly, weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, weak, nonatomic) AMSUIWebContainerViewController *currentContainer;
@property (retain, nonatomic) NSString *currentRefreshToken; // ivar: _currentRefreshToken
@property (nonatomic) NSUInteger previousNavigationIndex; // ivar: _previousNavigationIndex
@property (nonatomic) NSInteger previousPageIndex; // ivar: _previousPageIndex
@property (readonly, weak, nonatomic) AMSUIWebContainerViewController *rootContainer; // ivar: _rootContainer
@property (retain, nonatomic) NSLock *timeoutLock; // ivar: _timeoutLock
@property (retain, nonatomic) NSMutableSet *timeouts; // ivar: _timeouts


-(id)_refreshPageWithForContainer:(id)arg0 options:(id)arg1 isRetry:(BOOL)arg2 ;
-(id)initWithRootContainer:(id)arg0 context:(id)arg1 ;
-(id)refreshPageForContainer:(id)arg0 options:(id)arg1 ;
-(id)replaceWithPageModel:(id)arg0 forContainer:(id)arg1 options:(id)arg2 ;
-(void)_setWindowSize:(struct CGSize )arg0 onContainer:(id)arg1 completion:(id)arg2 ;
-(void)_takeSnapshotFromContainer:(id)arg0 completion:(id)arg1 ;
-(void)dismissViewController;
-(void)performSafeTransitionFrom:(id)arg0 block:(id)arg1 ;
-(void)popViewController;
-(void)popViewControllerToRelativeIndex:(NSInteger)arg0 ;
-(void)presentWithOptions:(id)arg0 ;
-(void)pushWithOptions:(id)arg0 ;
-(void)startTimeout:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)startTimeoutInterruption;
-(void)stopTimeoutInterruption;


@end


#endif