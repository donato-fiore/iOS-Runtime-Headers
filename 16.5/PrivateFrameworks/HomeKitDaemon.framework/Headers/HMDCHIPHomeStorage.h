// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPHOMESTORAGE_H
#define HMDCHIPHOMESTORAGE_H

@class HMFObject, NSString, NSDictionary, NSNumber, NSData;
@protocol HMFLogging, NSCopying, NSSecureCoding;



@interface HMDCHIPHomeStorage : HMFObject <HMFLogging, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *fabricID; // ivar: _fabricID
@property (copy) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (readonly) NSUInteger hash;
@property (copy) NSData *intermediateCertificate; // ivar: _intermediateCertificate
@property (copy) NSDictionary *keyValueStore; // ivar: _keyValueStore
@property (copy) NSNumber *lastNodeID; // ivar: _lastNodeID
@property (copy) NSData *operationalCertificate; // ivar: _operationalCertificate
@property (copy) NSData *rootCertificate; // ivar: _rootCertificate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateUsingHomeModel:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateHomeModel:(id)arg0 ;


@end


#endif