// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDFACECROPMODEL_H
#define HMDFACECROPMODEL_H

@class HMBModel, NSData, NSDate, HMBModelCloudReference, NSUUID, NSNumber;



@interface HMDFaceCropModel : HMBModel

@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property CGRect faceBoundingBox;
@property (retain) NSData *faceBoundingBoxData;
@property (retain) HMBModelCloudReference *person;
@property (retain) NSUUID *personUUID;
@property NSInteger source;
@property (retain) NSNumber *sourceField;
@property (retain) NSUUID *unassociatedFaceCropUUID;


+(id)faceCropsForPersonUUIDQuery;
+(id)faceCropsWithUnassociatedFaceCropUUIDQuery;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)sentinelParentUUID;
-(id)createPersonFaceCrop;
-(id)initWithPersonFaceCrop:(id)arg0 ;


@end


#endif