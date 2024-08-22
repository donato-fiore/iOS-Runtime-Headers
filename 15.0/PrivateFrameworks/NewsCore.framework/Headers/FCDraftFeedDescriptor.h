// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCDRAFTFEEDDESCRIPTOR_H
#define FCDRAFTFEEDDESCRIPTOR_H

@class NSString;
@protocol FCChannelProviding;


#import "FCFeedDescriptor.h"

@interface FCDraftFeedDescriptor : FCFeedDescriptor

@property (readonly, nonatomic) NSString *articleListID; // ivar: _articleListID
@property (readonly, nonatomic) NSObject<FCChannelProviding> *channel; // ivar: _channel
@property (readonly, nonatomic) NSString *issueListID; // ivar: _issueListID


-(NSInteger)feedType;
-(id)backingChannel;
-(id)backingTag;
-(id)initWithChannel:(id)arg0 articleListID:(id)arg1 issueListID:(id)arg2 ;
-(id)name;


@end


#endif