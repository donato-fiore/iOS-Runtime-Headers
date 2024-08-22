// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAPROPERTYRESPONSE_H
#define HMDMEDIAPROPERTYRESPONSE_H

@class HMFObject, NSError, NSDate;


#import "HMDMediaPropertyRequest.h"

@interface HMDMediaPropertyResponse : HMFObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) HMDMediaPropertyRequest *request; // ivar: _request
@property (retain, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSDate *valueUpdatedTime; // ivar: _valueUpdatedTime


+(id)groupedProfileResponses:(id)arg0 ;
+(id)propertyResponsesFromRequests:(id)arg0 error:(id)arg1 ;
+(id)responseWithRequest:(id)arg0 error:(id)arg1 ;
+(id)responseWithRequest:(id)arg0 value:(id)arg1 updatedTime:(id)arg2 ;
+(id)responsesFromSerializedResponse:(id)arg0 requests:(id)arg1 home:(id)arg2 ;
+(id)serializeResponses:(id)arg0 ;
-(id)description;
-(id)initWithRequest:(id)arg0 error:(id)arg1 ;
-(id)initWithRequest:(id)arg0 value:(id)arg1 updatedTime:(id)arg2 ;


@end


#endif