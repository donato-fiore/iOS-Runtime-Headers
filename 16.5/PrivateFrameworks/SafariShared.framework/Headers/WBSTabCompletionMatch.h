// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTABCOMPLETIONMATCH_H
#define WBSTABCOMPLETIONMATCH_H

@class NSString, NSURL;


#import "WBSURLCompletionMatch.h"

@interface WBSTabCompletionMatch : WBSURLCompletionMatch

@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(NSInteger)_matchLocationForString:(id)arg0 url:(id)arg1 title:(id)arg2 ;
-(id)initWithUserTypedString:(id)arg0 url:(id)arg1 title:(id)arg2 forQueryID:(NSInteger)arg3 ;
-(id)originalURLString;
-(id)userVisibleURLString;


@end


#endif