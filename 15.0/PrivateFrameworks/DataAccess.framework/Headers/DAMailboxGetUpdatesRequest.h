// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAMAILBOXGETUPDATESREQUEST_H
#define DAMAILBOXGETUPDATESREQUEST_H



#import "DAMailboxRequest.h"

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

@property (nonatomic) int maxSize; // ivar: _maxSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initRequestForBodyFormat:(int)arg0 withBodySizeLimit:(int)arg1 ;


@end


#endif