// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFBLOCKEDSENDERVIEWSUGGESTION_H
#define MFBLOCKEDSENDERVIEWSUGGESTION_H

@class NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "MFBlockedSenderBannerView.h"

@interface MFBlockedSenderViewSuggestion : NSObject <SGSuggestion>



@property (weak) MFBlockedSenderBannerView *blockedSenderView; // ivar: _blockedSenderView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithBlockedSenderView:(id)arg0 ;


@end


#endif