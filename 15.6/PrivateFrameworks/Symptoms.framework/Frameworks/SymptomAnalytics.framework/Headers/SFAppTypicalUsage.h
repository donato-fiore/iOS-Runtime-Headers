// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPTYPICALUSAGE_H
#define SFAPPTYPICALUSAGE_H

@class NSManagedObject, NSDate, NSNumber;


#import "SFApp.h"

@interface SFAppTypicalUsage : NSManagedObject

@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) SFApp *hasApp;
@property (copy, nonatomic) NSNumber *intervalType;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *wifiIN;
@property (copy, nonatomic) NSNumber *wifiIN_M2;
@property (copy, nonatomic) NSNumber *wifiIN_mean;
@property (copy, nonatomic) NSNumber *wifiIN_var;
@property (copy, nonatomic) NSNumber *wifiOUT;
@property (copy, nonatomic) NSNumber *wifiOUT_M2;
@property (copy, nonatomic) NSNumber *wifiOUT_mean;
@property (copy, nonatomic) NSNumber *wifiOUT_var;
@property (copy, nonatomic) NSNumber *wifiSampleCount;
@property (copy, nonatomic) NSNumber *wiredIN;
@property (copy, nonatomic) NSNumber *wiredIN_M2;
@property (copy, nonatomic) NSNumber *wiredIN_mean;
@property (copy, nonatomic) NSNumber *wiredIN_var;
@property (copy, nonatomic) NSNumber *wiredOUT;
@property (copy, nonatomic) NSNumber *wiredOUT_M2;
@property (copy, nonatomic) NSNumber *wiredOUT_mean;
@property (copy, nonatomic) NSNumber *wiredOUT_var;
@property (copy, nonatomic) NSNumber *wiredSampleCount;
@property (copy, nonatomic) NSNumber *wwanIN;
@property (copy, nonatomic) NSNumber *wwanIN_M2;
@property (copy, nonatomic) NSNumber *wwanIN_mean;
@property (copy, nonatomic) NSNumber *wwanIN_var;
@property (copy, nonatomic) NSNumber *wwanOUT;
@property (copy, nonatomic) NSNumber *wwanOUT_M2;
@property (copy, nonatomic) NSNumber *wwanOUT_mean;
@property (copy, nonatomic) NSNumber *wwanOUT_var;
@property (copy, nonatomic) NSNumber *wwanSampleCount;


+(id)entityName;
+(id)fetchRequest;


@end


#endif