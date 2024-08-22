// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHARACTERISTICWRITEACTIONMODEL_H
#define HMDCHARACTERISTICWRITEACTIONMODEL_H

@class NSString, NSNumber;


#import "HMDActionModel.h"

@interface HMDCharacteristicWriteActionModel : HMDActionModel

@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) id *targetValue;


+(id)properties;
-(id)dependentUUIDs;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif