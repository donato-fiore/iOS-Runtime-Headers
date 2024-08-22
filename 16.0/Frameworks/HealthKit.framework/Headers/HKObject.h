// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOBJECT_H
#define HKOBJECT_H

@class NSUUID, NSDictionary, NSDate, NSString;
@protocol HKUUIDProvider, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKContributor.h"
#import "HKDevice.h"
#import "HKSource.h"
#import "HKSourceRevision.h"

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding>

 {
    NSUUID *_UUID;
    NSDictionary *_metadata;
    NSInteger _provenanceID;
}


@property (readonly) NSUUID *UUID;
@property (readonly, nonatomic) HKContributor *contributor; // ivar: _contributor
@property (copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) HKSource *source;
@property (copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly) HKSourceRevision *sourceRevision; // ivar: _sourceRevision
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic, getter=_timeZoneName) NSString *timeZoneName;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)_newDataObjectWithMetadata:(id)arg0 device:(id)arg1 config:(id)arg2 ;
-(BOOL)_shouldNotifyOnInsert;
-(BOOL)_validateForSavingWithClientEntitlements:(id)arg0 applicationSDKVersion:(unsigned int)arg1 isAppleWatch:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)prepareForDelivery:(*id)arg0 ;
-(BOOL)prepareForSaving:(*id)arg0 ;
-(NSInteger)_externalSyncObjectCode;
-(NSInteger)hk_integerValue;
-(id)_copyByArchiving;
-(id)_init;
-(id)_validateConfiguration;
-(id)_validateConfigurationAllowingPrivateMetadata:(BOOL)arg0 applicationSDKVersion:(unsigned int)arg1 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)_valueDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_validateForCreation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif