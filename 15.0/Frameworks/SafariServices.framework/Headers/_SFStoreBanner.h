// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSTOREBANNER_H
#define _SFSTOREBANNER_H

@class SFPinnableBanner, SKProductPageViewController, NSNumber, NSString;
@protocol SKProductPageViewControllerDelegate, _SFAppSuggestionBanner, _SFAppSuggestionBannerDelegate;



@interface _SFStoreBanner : SFPinnableBanner <SKProductPageViewControllerDelegate, _SFAppSuggestionBanner>

 {
    SKProductPageViewController *_productViewController;
    NSNumber *_productID;
    NSString *_affiliateData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFAppSuggestionBannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProductID:(id)arg0 mainDocumentURL:(id)arg1 affiliateData:(id)arg2 applicationLaunchArgument:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setBlockedByUser;
-(void)dealloc;
-(void)layoutSubviews;
-(void)productPage:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)productPage:(id)arg0 didFinishPurchase:(id)arg1 withError:(id)arg2 ;
-(void)productPage:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)productPage:(id)arg0 willMakePurchases:(id)arg1 ;
-(void)setTheme:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif