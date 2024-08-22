// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SROSMARTREPLIESSUGGESTION_H
#define SROSMARTREPLIESSUGGESTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC12SmartReplies24SRSmartRepliesSuggestion.h"

@interface SROSmartRepliesSuggestion : NSObject {
    _TtC12SmartReplies24SRSmartRepliesSuggestion *_underlyingSuggestion;
}


@property (readonly, nonatomic) BOOL isDynamicSuggestion;
@property (readonly, copy, nonatomic) NSString *title;


-(id)initWithTitle:(id)arg0 isDynamicSuggestion:(BOOL)arg1 ;


@end


#endif