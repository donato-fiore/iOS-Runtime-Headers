// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBGARAGEDOOR_H
#define DBGARAGEDOOR_H



#import "DBHomeKitService.h"
#import "DBHomeKitDoorStateCharacteristic.h"
#import "DBHomeKitBoolCharacteristic.h"

@interface DBGarageDoor : DBHomeKitService

@property (readonly, nonatomic) BOOL current;
@property (readonly, nonatomic) NSInteger doorState;
@property (readonly, nonatomic) DBHomeKitDoorStateCharacteristic *doorStateCharacteristic;
@property (readonly, nonatomic) BOOL obstructionDetected;
@property (readonly, nonatomic) DBHomeKitBoolCharacteristic *obstructionDetectedCharacteristic;
@property (nonatomic) NSInteger targetDoorState;
@property (readonly, nonatomic) DBHomeKitDoorStateCharacteristic *targetDoorStateCharacteristic;


+(id)observerProtocol;
+(id)serviceType;
+(void)load;
-(BOOL)_shouldUpdateLastUsedForCharacteristic:(id)arg0 ;
-(BOOL)_tracksLastUsed;
-(BOOL)hasError;
-(BOOL)pendingRead;
-(BOOL)pendingWrite;
-(NSInteger)_doorStateForCharacteristic:(id)arg0 ;
-(id)description;
-(id)managedCharacteristics;
-(void)_characteristicDidUpdate:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif