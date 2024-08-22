// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCLIPLINKBANNER_H
#define SFCLIPLINKBANNER_H

@class NSString;
@protocol SFAppSuggestionBanner, SFAppSuggestionBannerDelegate;


#import "SFLinkBanner.h"
#import "SFOverlayProvider.h"
#import "SFClipLink.h"

@interface SFClipLinkBanner : SFLinkBanner <SFAppSuggestionBanner>

 {
    SFOverlayProvider *_overlayProvider;
}


@property (readonly, nonatomic) SFClipLink *clipLink; // ivar: _clipLink
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAppSuggestionBannerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(void)getClipLinkBannerForClipLink:(id)arg0 openActionHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)_initWithClipLink:(id)arg0 openActionHandler:(id)arg1 ;
-(id)overlayProvider;


@end


#endif