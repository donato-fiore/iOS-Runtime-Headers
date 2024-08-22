// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDOCUMENTBROWSERTRANSITIONCONTROLLER_H
#define UIDOCUMENTBROWSERTRANSITIONCONTROLLER_H

@class NSURL, FPItem, UIView, NSString, NSProgress, NSOperationQueue;
@protocol UIViewControllerAnimatedTransitioning, DOCServiceDocumentBrowserViewControllerInterface, DOCServiceTransitionProtocol;

#import <Foundation/Foundation.h>


@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    NSURL *_itemURL;
    FPItem *_item;
    id<DOCServiceDocumentBrowserViewControllerInterface> *_serviceDocumentBrowserProxy;
    UIView *_referenceView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *loadingProgress; // ivar: _loadingProgress
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *targetView; // ivar: _targetView
@property (retain, nonatomic) NSObject<DOCServiceTransitionProtocol> *transitionController; // ivar: _transitionController
@property (retain, nonatomic) NSOperationQueue *transitionControllerQueue; // ivar: _transitionControllerQueue
@property BOOL transitionDidFinish; // ivar: _transitionDidFinish


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithItem:(id)arg0 documentBrowserProxy:(id)arg1 referenceView:(id)arg2 ;
-(id)initWithItemURL:(id)arg0 documentBrowserProxy:(id)arg1 referenceView:(id)arg2 ;
-(void)_commonInit;
-(void)animateTransition:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif