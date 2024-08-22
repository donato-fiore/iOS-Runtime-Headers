// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFHASMORECONTENTSUGGESTION_H
#define MFHASMORECONTENTSUGGESTION_H

@class NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "MFHasMoreContentBannerView.h"

@interface MFHasMoreContentSuggestion : NSObject <SGSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) MFHasMoreContentBannerView *moreContentBanner; // ivar: _moreContentBanner
@property (readonly, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithBlockedContentBanner:(id)arg0 ;


@end


#endif