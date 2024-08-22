// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FEATURE_H
#define FEATURE_H

@class NSManagedObject, NSDate, NSString;


#import "APOdmlVector.h"

@interface Feature : NSManagedObject

@property (copy, nonatomic) NSDate *createdAt;
@property (nonatomic) int deploymentID;
@property (copy, nonatomic) NSString *experimentID;
@property (copy, nonatomic) NSString *featureType;
@property (copy, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) APOdmlVector *value;


+(id)fetchRequest;


@end


#endif