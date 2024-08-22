// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INCREMENTALSEARCHOPERATION_H
#define _INCREMENTALSEARCHOPERATION_H

@class NSOperation, NSRegularExpression, NSString;



@interface _IncrementalSearchOperation : NSOperation

@property (readonly) NSRegularExpression *regularExpression; // ivar: _regularExpression
@property (readonly) NSString *searchBody; // ivar: _searchBody
@property (readonly) id *searchFinishedBlock; // ivar: _searchFinishedBlock
@property (readonly) id *searchResultsBlock; // ivar: _searchResultsBlock


// -(id)initWithSearchString:(id)arg0 searchBody:(id)arg1 resultsBlock:(id)arg2 finishedBlock:(unk)arg3  ;
-(void)main;


@end


#endif