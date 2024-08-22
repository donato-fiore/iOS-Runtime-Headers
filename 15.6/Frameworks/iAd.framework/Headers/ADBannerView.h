// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADBANNERVIEW_H
#define ADBANNERVIEW_H

@class UIView;



@interface ADBannerView : UIView

@property (readonly, nonatomic) NSInteger adType; // ivar: _adType
@property (copy, nonatomic) id *advertisingSection; // ivar: _advertisingSection
@property (readonly, nonatomic, getter=isBannerLoaded) BOOL bannerLoaded; // ivar: _bannerLoaded
@property (readonly, nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress; // ivar: _bannerViewActionInProgress
@property (copy, nonatomic) id *currentContentSizeIdentifier; // ivar: _currentContentSizeIdentifier
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (copy, nonatomic) id *requiredContentSizeIdentifiers; // ivar: _requiredContentSizeIdentifiers


+(struct CGSize )sizeFromBannerContentSizeIdentifier:(id)arg0 ;
-(id)initWithAdType:(NSInteger)arg0 ;
-(void)cancelBannerViewAction;


@end


#endif