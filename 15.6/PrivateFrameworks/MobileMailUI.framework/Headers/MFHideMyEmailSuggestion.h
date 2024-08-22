// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFHIDEMYEMAILSUGGESTION_H
#define MFHIDEMYEMAILSUGGESTION_H

@class NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "MFHideMyEmailBannerView.h"

@interface MFHideMyEmailSuggestion : NSObject <SGSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) MFHideMyEmailBannerView *hideMyEmailBanner; // ivar: _hideMyEmailBanner
@property (readonly, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithHideMyEmailBanner:(id)arg0 ;


@end


#endif