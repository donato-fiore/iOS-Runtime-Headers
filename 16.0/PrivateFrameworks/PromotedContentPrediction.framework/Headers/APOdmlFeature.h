// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLFEATURE_H
#define APODMLFEATURE_H

@class NSManagedObject, NSDate, NSString;
@protocol NSSecureCoding><NSObject;



@interface APOdmlFeature : NSManagedObject

@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) int deploymentID;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *featureType;
@property (retain, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) NSObject<NSSecureCoding><NSObject> *value;




@end


#endif