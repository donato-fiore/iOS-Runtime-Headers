// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLOADBLOCKEDCONTENTBANNERVIEW_H
#define MFLOADBLOCKEDCONTENTBANNERVIEW_H

@protocol MFLoadBlockedContentBannerViewDelegate;


#import "MFSuggestionBannerView.h"

@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView {
    NSInteger _blockingReason;
}


@property (nonatomic) NSUInteger blockedContentTypes; // ivar: _blockedContentTypes
@property (weak, nonatomic) NSObject<MFLoadBlockedContentBannerViewDelegate> *delegate; // ivar: _delegate


+(id)log;
-(id)actionTitle;
-(id)bannerIcon;
-(id)initWithFrame:(struct CGRect )arg0 blockedContentTypes:(NSUInteger)arg1 blockingReason:(NSInteger)arg2 ;
-(id)title;
-(void)_titleControlTapped:(id)arg0 ;
-(void)_updateBannerText;
-(void)enablePrivacyProtectionAlertForAccount;
-(void)primaryAction;


@end


#endif