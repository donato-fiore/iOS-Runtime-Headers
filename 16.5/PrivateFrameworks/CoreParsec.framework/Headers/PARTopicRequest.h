// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARTOPICREQUEST_H
#define PARTOPICREQUEST_H

@class NSArray;
@protocol NSSecureCoding;


#import "PARRequest.h"

@interface PARTopicRequest : PARRequest <NSSecureCoding>



@property (readonly, retain) NSArray *localTopics; // ivar: _localTopics
@property (readonly, retain) NSArray *queryTopicContexts; // ivar: _queryTopicContexts
@property (nonatomic) CGFloat timeoutIntervalForRequest; // ivar: _timeoutIntervalForRequest
@property (copy, nonatomic) NSArray *topics; // ivar: _topics


+(BOOL)supportsSecureCoding;
-(Class)responseClass;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)nwActivityLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif