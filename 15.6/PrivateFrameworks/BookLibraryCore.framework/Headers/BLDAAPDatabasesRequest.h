// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLDAAPDATABASESREQUEST_H
#define BLDAAPDATABASESREQUEST_H

@class NSNumber;


#import "BLDAAPURLRequest.h"

@interface BLDAAPDatabasesRequest : BLDAAPURLRequest

@property (copy, nonatomic) NSNumber *delta; // ivar: _delta


-(id)initWithDSID:(id)arg0 reason:(NSInteger)arg1 sessionID:(id)arg2 revisionNumber:(id)arg3 delta:(id)arg4 ;


@end


#endif