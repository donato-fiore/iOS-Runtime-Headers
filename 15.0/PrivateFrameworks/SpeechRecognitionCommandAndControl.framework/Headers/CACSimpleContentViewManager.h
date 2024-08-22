// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACSIMPLECONTENTVIEWMANAGER_H
#define CACSIMPLECONTENTVIEWMANAGER_H

@class UIViewController<CACViewController>;
@protocol CACContentViewManager, CACSimpleContentViewManagerDelegate;

#import <Foundation/Foundation.h>


@interface CACSimpleContentViewManager : NSObject <CACContentViewManager>



@property NSInteger activeDimmingTransactionID; // ivar: _activeDimmingTransactionID
@property (weak, nonatomic) NSObject<CACSimpleContentViewManagerDelegate> *contentViewManagerDelegate; // ivar: _contentViewManagerDelegate
@property NSInteger pendingDimmingTransactionID; // ivar: _pendingDimmingTransactionID
@property (retain, nonatomic) UIViewController<CACViewController> *viewController; // ivar: _viewController


-(BOOL)isOutOfProcess;
-(BOOL)isOverlay;
-(BOOL)isPhysiciallyInteractiveOverlay;
-(BOOL)isShowing;
-(void)_hideAnimated:(BOOL)arg0 ;
-(void)hide;
-(void)hideAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)hideWithoutAnimation;
// -(void)showViewControllerWithCreationHandler:(id)arg0 updateHandler:(unk)arg1  ;
-(void)startDelayedDimmingOfNumbers;
-(void)stopDelayedDimmingOfNumbers;


@end


#endif