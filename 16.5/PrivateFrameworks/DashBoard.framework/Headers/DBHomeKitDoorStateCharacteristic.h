// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBHOMEKITDOORSTATECHARACTERISTIC_H
#define DBHOMEKITDOORSTATECHARACTERISTIC_H



#import "DBHomeKitCharacteristic.h"

@interface DBHomeKitDoorStateCharacteristic : DBHomeKitCharacteristic

@property (nonatomic) NSInteger doorStateValue;


+(id)characteristicFormat;
+(id)characteristicFormats;
+(id)stringForDoorState:(NSInteger)arg0 ;
+(void)load;
-(id)formatedValue;


@end


#endif