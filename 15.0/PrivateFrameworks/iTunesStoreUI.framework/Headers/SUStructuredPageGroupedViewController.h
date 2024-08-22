// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSTRUCTUREDPAGEGROUPEDVIEWCONTROLLER_H
#define SUSTRUCTUREDPAGEGROUPEDVIEWCONTROLLER_H



#import "SUStructuredPageViewController.h"
#import "SULoadingView.h"

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {
    SULoadingView *_loadingView;
}




-(BOOL)_addPurchaseBatch:(id)arg0 forIndexPath:(id)arg1 ;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg0 withApplication:(id)arg1 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)newNoItemsOverlayLabel;
-(void)_performPurchaseAnimationForIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)setSkLoading:(BOOL)arg0 ;


@end


#endif