// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFCLIPLINKBANNER_H
#define _SFCLIPLINKBANNER_H

@class SFLinkBanner, NSString;
@protocol _SFAppSuggestionBanner, _SFAppSuggestionBannerDelegate;


#import "_SFOverlayProvider.h"
#import "_SFClipLink.h"

@interface _SFClipLinkBanner : SFLinkBanner <_SFAppSuggestionBanner>

 {
    _SFOverlayProvider *_overlayProvider;
}


@property (readonly, nonatomic) _SFClipLink *clipLink; // ivar: _clipLink
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFAppSuggestionBannerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(void)getClipLinkBannerForClipLink:(id)arg0 openActionHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)_initWithClipLink:(id)arg0 openActionHandler:(id)arg1 ;
-(id)overlayProvider;


@end


#endif