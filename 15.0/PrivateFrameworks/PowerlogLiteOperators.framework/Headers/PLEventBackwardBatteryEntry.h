// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLEVENTBACKWARDBATTERYENTRY_H
#define PLEVENTBACKWARDBATTERYENTRY_H

@class PLEntry;



@interface PLEventBackwardBatteryEntry : PLEntry



+(id)entryKey;
+(void)load;
+(void)populateCellVoltageForEntry:(id)arg0 withRawData:(id)arg1 ;
+(void)populateCellWOMForEntry:(id)arg0 withRawData:(id)arg1 ;
+(void)populateDODForEntry:(id)arg0 withRawData:(id)arg1 ;
+(void)populateQmaxForEntry:(id)arg0 withRawData:(id)arg1 ;
-(id)absoluteLevelWithRawData:(id)arg0 ;
-(id)initEntryWithRawData:(id)arg0 ;
-(id)levelWithRawData:(id)arg0 ;
-(id)rawLevelWithRawData:(id)arg0 ;
-(void)dealloc;
-(void)populatePowerOutFromRawData:(id)arg0 ;
-(void)populatePresentDODFromRawData:(id)arg0 ;


@end


#endif