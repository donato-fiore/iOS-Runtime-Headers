// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAMAILBOXSETFLAGSREQUEST_H
#define DAMAILBOXSETFLAGSREQUEST_H



#import "DAMailboxRequest.h"

@interface DAMailboxSetFlagsRequest : DAMailboxRequest

@property (nonatomic) NSUInteger offFlags; // ivar: _offFlags
@property (nonatomic) NSUInteger onFlags; // ivar: _onFlags


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initRequestWithSetFlags:(NSUInteger)arg0 unsetFlags:(NSUInteger)arg1 message:(id)arg2 ;


@end


#endif