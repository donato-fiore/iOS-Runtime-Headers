// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFDEVICEREQUESTHANDLINGRECORD_H
#define AFDEVICEREQUESTHANDLINGRECORD_H

@class NSString;
@protocol AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFDeviceRequestHandlingRecord : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceRoles; // ivar: _deviceRoles
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithRequestID:(id)arg0 deviceRoles:(NSUInteger)arg1 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif