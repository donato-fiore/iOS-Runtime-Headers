// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBMODELREFERENCE_H
#define HMBMODELREFERENCE_H

@class HMFObject, NSString, NSUUID;
@protocol HMBModelObjectCoder, NSSecureCoding, HMBQueryableModelFieldCoder;


#import "HMBLocalZone.h"

@interface HMBModelReference : HMFObject <HMBModelObjectCoder, NSSecureCoding, HMBQueryableModelFieldCoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *hmbModelID; // ivar: _hmbModelID
@property (weak, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)hmbDecodeQueryableParameter:(id)arg0 ;
+(id)hmbDescriptionForEncodedQueryableVariable:(id)arg0 ;
+(id)hmbEncodeQueryableParameter:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelID:(id)arg0 ;
-(id)isValidForContainer:(id)arg0 updatedModelIDs:(id)arg1 ;
-(id)referencedModelFromLocalZone:(id)arg0 error:(*id)arg1 ;
-(void)associateWithContainer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif