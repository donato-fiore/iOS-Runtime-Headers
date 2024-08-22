// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAPROPERTYWRITEREQUEST_H
#define HMDMEDIAPROPERTYWRITEREQUEST_H

@class NSUUID;


#import "HMDMediaPropertyRequest.h"

@interface HMDMediaPropertyWriteRequest : HMDMediaPropertyRequest

@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)deserializeWriteRequests:(id)arg0 mediaProfile:(id)arg1 ;
+(id)requestWithProperty:(id)arg0 mediaProfile:(id)arg1 ;
+(id)serializeWriteRequests:(id)arg0 ;
+(id)writeRequestWithProperty:(id)arg0 value:(id)arg1 mediaProfile:(id)arg2 ;
+(id)writeRequestWithProperty:(id)arg0 value:(id)arg1 mediaProfile:(id)arg2 identifier:(id)arg3 ;
-(id)description;
-(id)initWithProperty:(id)arg0 value:(id)arg1 mediaProfile:(id)arg2 identifier:(id)arg3 ;


@end


#endif