// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAMAILBOXFETCHMESSAGEREQUEST_H
#define DAMAILBOXFETCHMESSAGEREQUEST_H



#import "DAMailboxRequest.h"

@interface DAMailboxFetchMessageRequest : DAMailboxRequest

@property (nonatomic) int maxSize; // ivar: _maxSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initRequestForBodyFormat:(int)arg0 withMessageID:(id)arg1 withBodySizeLimit:(int)arg2 ;


@end


#endif