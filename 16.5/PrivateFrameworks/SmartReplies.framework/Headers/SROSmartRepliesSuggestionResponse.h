// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SROSMARTREPLIESSUGGESTIONRESPONSE_H
#define SROSMARTREPLIESSUGGESTIONRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC12SmartReplies32SRSmartRepliesSuggestionResponse.h"

@interface SROSmartRepliesSuggestionResponse : NSObject {
    _TtC12SmartReplies32SRSmartRepliesSuggestionResponse *_underlyingResponse;
}


@property (readonly, nonatomic) NSArray *suggestions;


-(id)initWithSuggestions:(id)arg0 ;


@end


#endif