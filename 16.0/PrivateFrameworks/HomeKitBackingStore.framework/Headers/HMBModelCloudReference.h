// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBMODELCLOUDREFERENCE_H
#define HMBMODELCLOUDREFERENCE_H

@class NSString, CKReference;
@protocol HMBModelNativeCKWrapper, NSSecureCoding;


#import "HMBModelReference.h"
#import "HMBCloudZone.h"

@interface HMBModelCloudReference : HMBModelReference <HMBModelNativeCKWrapper, NSSecureCoding>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (weak, nonatomic) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKReference *reference; // ivar: _reference
@property (readonly) Class superclass;


+(BOOL)includeInModelEncoding;
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)applyNativeCKValue:(id)arg0 fromSource:(NSUInteger)arg1 associatingWith:(id)arg2 toModel:(id)arg3 propertyNamed:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelID:(id)arg0 action:(NSUInteger)arg1 ;
-(id)nativeCKValueWithEncodingContext:(id)arg0 error:(*id)arg1 ;
-(id)referencedModelFromCloudZone:(id)arg0 allowExternalFetch:(BOOL)arg1 ;
-(void)associateWithContainer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif