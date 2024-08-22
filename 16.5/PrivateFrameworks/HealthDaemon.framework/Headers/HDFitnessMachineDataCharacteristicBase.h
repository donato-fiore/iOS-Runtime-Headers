// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFITNESSMACHINEDATACHARACTERISTICBASE_H
#define HDFITNESSMACHINEDATACHARACTERISTICBASE_H

@class NSArray, NSString, NSDate;
@protocol HDDatumRendering, HDHealthServiceCharacteristic;


#import "HDHealthServiceCharacteristic.h"

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>



@property (readonly, copy, nonatomic) NSArray *allFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *updateTime;


+(id)_buildWithBinaryValue:(id)arg0 error:(*id)arg1 ;
+(id)uuid;
+(unsigned char)flagFieldLength;
-(id)generateDatums:(id)arg0 ;
-(id)getBinaryValueWithError:(*id)arg0 ;


@end


#endif