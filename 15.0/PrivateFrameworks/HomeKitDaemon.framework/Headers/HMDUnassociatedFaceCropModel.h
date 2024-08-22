// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUNASSOCIATEDFACECROPMODEL_H
#define HMDUNASSOCIATEDFACECROPMODEL_H

@class HMBModel, NSData, NSDate;



@interface HMDUnassociatedFaceCropModel : HMBModel

@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property CGRect faceBoundingBox;
@property (retain) NSData *faceBoundingBoxData;


+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)sentinelParentUUID;
+(id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(BOOL)arg0 ;
-(id)createFaceCrop;
-(id)initWithFaceCrop:(id)arg0 ;


@end


#endif