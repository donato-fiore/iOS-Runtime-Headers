// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMWEBRESULTSVIEWCONTROLLER_H
#define SKUIREDEEMWEBRESULTSVIEWCONTROLLER_H

@class NSString;
@protocol SUStorePageViewControllerResponder;


#import "SKUIRedeemResultsViewController.h"

@interface SKUIRedeemWebResultsViewController : SKUIRedeemResultsViewController <SUStorePageViewControllerResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canShowResultsForRedeem:(id)arg0 ;
-(void)dealloc;
-(void)storePage:(id)arg0 finishedWithSuccess:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif