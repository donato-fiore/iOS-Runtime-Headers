// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARASYNCMORERESULTS_H
#define PARASYNCMORERESULTS_H

@class SFMoreResults, NSURL;



@interface PARAsyncMoreResults : SFMoreResults

@property (readonly, nonatomic) NSUInteger clientQueryId; // ivar: _clientQueryId
@property (readonly, copy, nonatomic) NSURL *moreResultsURL; // ivar: _moreResultsURL
@property (readonly, nonatomic) NSUInteger queryId; // ivar: _queryId
@property (nonatomic) CGFloat scale; // ivar: _scale


+(BOOL)supportsSecureCoding;
+(id)moreResults:(id)arg0 label:(id)arg1 session:(id)arg2 scale:(CGFloat)arg3 queryId:(NSUInteger)arg4 ;
+(id)moreResults:(id)arg0 label:(id)arg1 session:(id)arg2 scale:(CGFloat)arg3 queryId:(NSUInteger)arg4 clientQueryId:(NSUInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif