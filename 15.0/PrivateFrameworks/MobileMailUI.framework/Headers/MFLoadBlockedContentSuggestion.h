// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLOADBLOCKEDCONTENTSUGGESTION_H
#define MFLOADBLOCKEDCONTENTSUGGESTION_H

@class NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "MFLoadBlockedContentBannerView.h"

@interface MFLoadBlockedContentSuggestion : NSObject <SGSuggestion>



@property (weak) MFLoadBlockedContentBannerView *blockedContentBanner; // ivar: _blockedContentBanner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithBlockedContentBanner:(id)arg0 ;


@end


#endif