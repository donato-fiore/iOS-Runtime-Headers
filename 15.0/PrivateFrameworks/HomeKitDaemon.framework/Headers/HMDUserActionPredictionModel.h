// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERACTIONPREDICTIONMODEL_H
#define HMDUSERACTIONPREDICTIONMODEL_H

@class HMBModel, NSNumber, NSUUID;



@interface HMDUserActionPredictionModel : HMBModel

@property (copy) NSNumber *groupType;
@property (copy) NSNumber *predictionScore;
@property (copy) NSUUID *predictionTargetUUID;
@property (copy) NSUUID *targetGroupUUID;
@property (copy) NSUUID *targetServiceGroupUUID;
@property (copy) NSUUID *targetServiceUUID;
@property (copy) NSNumber *type;


+(BOOL)hmbExcludeFromCloudStorage;
+(id)hmbProperties;
-(id)initWithUserActionPrediction:(id)arg0 ;
-(id)userActionPrediction;


@end


#endif