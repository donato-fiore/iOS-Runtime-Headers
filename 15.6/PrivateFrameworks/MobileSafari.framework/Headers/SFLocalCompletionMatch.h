// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFLOCALCOMPLETIONMATCH_H
#define SFLOCALCOMPLETIONMATCH_H

@class WBSURLCompletionMatch;
@protocol _SSURLCompletionMatch;



@interface SFLocalCompletionMatch : WBSURLCompletionMatch {
    id<_SSURLCompletionMatch> *_completionMatch;
}




-(NSInteger)matchLocation;
-(id)initWithCompletionMatch:(id)arg0 ;
-(id)originalURLString;
-(id)title;
-(id)userVisibleURLString;


@end


#endif