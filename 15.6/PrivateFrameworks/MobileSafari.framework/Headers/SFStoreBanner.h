// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSTOREBANNER_H
#define SFSTOREBANNER_H

@class SKProductPageViewController, NSNumber, NSString;
@protocol SKProductPageViewControllerDelegate, SFAppSuggestionBanner, SFAppSuggestionBannerDelegate;


#import "SFPinnableBanner.h"

@interface SFStoreBanner : SFPinnableBanner <SKProductPageViewControllerDelegate, SFAppSuggestionBanner>

 {
    SKProductPageViewController *_productViewController;
    NSNumber *_productID;
    NSString *_affiliateData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAppSuggestionBannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)omitsBottomSeparator;
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