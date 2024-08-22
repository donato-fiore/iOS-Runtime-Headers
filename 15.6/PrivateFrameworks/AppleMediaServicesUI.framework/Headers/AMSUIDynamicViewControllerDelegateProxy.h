// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIDYNAMICVIEWCONTROLLERDELEGATEPROXY_H
#define AMSUIDYNAMICVIEWCONTROLLERDELEGATEPROXY_H

@class NSString;
@protocol AMSUIDynamicViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "AMSUIDynamicViewController.h"

@interface AMSUIDynamicViewControllerDelegateProxy : NSObject <AMSUIDynamicViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIDynamicViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) AMSUIDynamicViewController *dynamicViewController; // ivar: _dynamicViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dynamicViewControllerShouldDismiss:(id)arg0 ;
-(id)dynamicViewController:(id)arg0 contentViewControllerWithDictionary:(id)arg1 ;
-(id)dynamicViewController:(id)arg0 contentViewWithDictionary:(id)arg1 frame:(struct CGRect )arg2 ;
-(id)initWithDynamicViewController:(id)arg0 ;
-(void)dynamicViewController:(id)arg0 didFinishCarrierLinkingWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 ;


@end


#endif