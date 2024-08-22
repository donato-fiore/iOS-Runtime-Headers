// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFFAILEDPROXYCONTENTSUGGESTION_H
#define MFFAILEDPROXYCONTENTSUGGESTION_H

@class NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "MFLoadFailedProxyContentBannerView.h"

@interface MFFailedProxyContentSuggestion : NSObject <SGSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) MFLoadFailedProxyContentBannerView *failedProxyContentBanner; // ivar: _failedProxyContentBanner
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithFailedProxyContentBanner:(id)arg0 ;


@end


#endif