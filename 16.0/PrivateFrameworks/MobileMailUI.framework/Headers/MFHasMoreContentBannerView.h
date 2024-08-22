// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFHASMORECONTENTBANNERVIEW_H
#define MFHASMORECONTENTBANNERVIEW_H

@class NSString;
@protocol MFHasMoreContentBannerViewDelegate;


#import "MFSuggestionBannerView.h"

@interface MFHasMoreContentBannerView : MFSuggestionBannerView

@property (weak, nonatomic) NSObject<MFHasMoreContentBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *titleString;


+(id)bannerWithFrame:(struct CGRect )arg0 isPlainText:(BOOL)arg1 remainingBytes:(NSUInteger)arg2 ;
-(id)actionStringIsDownloading:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_titleControlTapped:(id)arg0 ;
-(void)primaryAction;
-(void)reloadData;
-(void)requestLoad;


@end


#endif