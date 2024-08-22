// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDFACEPRINTMODEL_H
#define HMDFACEPRINTMODEL_H

@class HMBModel, NSData, HMBModelReference, NSUUID;



@interface HMDFaceprintModel : HMBModel

@property (copy) NSData *data;
@property (retain) HMBModelReference *faceCrop;
@property (copy) NSUUID *modelUUID;


+(BOOL)hmbExcludeFromCloudStorage;
+(id)hmbProperties;
-(id)createFaceprint;
-(id)initWithFaceprint:(id)arg0 ;


@end


#endif