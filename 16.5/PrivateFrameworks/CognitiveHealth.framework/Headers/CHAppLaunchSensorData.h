// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHAPPLAUNCHSENSORDATA_H
#define CHAPPLAUNCHSENSORDATA_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHAppLaunchSensorData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *algorithmType; // ivar: _algorithmType
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSArray *embeddingVector; // ivar: _embeddingVector
@property (readonly, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly, nonatomic) NSDate *trainingDate; // ivar: _trainingDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBundleId:(id)arg0 embeddingVector:(id)arg1 modelVersion:(id)arg2 algorithmType:(id)arg3 trainingDate:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif