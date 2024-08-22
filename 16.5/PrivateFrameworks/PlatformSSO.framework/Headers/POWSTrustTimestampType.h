// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTTIMESTAMPTYPE_H
#define POWSTRUSTTIMESTAMPTYPE_H

@class NSDate, NSString;


#import "POWSTrustBaseRequestType.h"

@interface POWSTrustTimestampType : POWSTrustBaseRequestType

@property (retain, nonatomic) NSDate *Created; // ivar: _Created
@property (retain, nonatomic) NSDate *Expires; // ivar: _Expires
@property (copy, nonatomic) NSString *Id; // ivar: _Id


+(id)definition;
-(id)description;


@end


#endif