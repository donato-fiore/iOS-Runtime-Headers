// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMATTRIBUTEWRITEREQUEST_H
#define HMATTRIBUTEWRITEREQUEST_H

@class NSString;
@protocol HMWriteOperation, NSCopying><NSObject;


#import "HMAttributeRequest.h"

@interface HMAttributeWriteRequest : HMAttributeRequest <HMWriteOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NSCopying><NSObject> *value; // ivar: _value


+(id)writeRequestWithAccessoryProfile:(id)arg0 attribute:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccessoryProfile:(id)arg0 attribute:(id)arg1 value:(id)arg2 ;


@end


#endif