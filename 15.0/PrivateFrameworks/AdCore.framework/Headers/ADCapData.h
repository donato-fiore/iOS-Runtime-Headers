// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADCAPDATA_H
#define ADCAPDATA_H

@class NSMutableArray, NSString;


#import "ADSingleton.h"

@interface ADCapData : ADSingleton

@property (retain, nonatomic) NSMutableArray *clickCountData; // ivar: _clickCountData
@property (retain, nonatomic) NSMutableArray *downloadData; // ivar: _downloadData
@property (retain, nonatomic) NSMutableArray *frequencyCapData; // ivar: _frequencyCapData
@property (retain, nonatomic) NSString *toroID; // ivar: _toroID


+(id)sharedInstance;
-(id)capDataJSON:(id)arg0 ;
-(id)clickCapObjectForAdamID:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)downloadObjectForAdamID:(id)arg0 ;
-(id)filteredCapData:(id)arg0 maxItems:(NSUInteger)arg1 expirationThresholdInSeconds:(CGFloat)arg2 ;
-(id)init;
-(id)restoreCapDataArrayFromPlist:(id)arg0 ;
-(void)addCapDataObject:(id)arg0 ofKind:(NSInteger)arg1 ;
-(void)checkAndUpdateToroID;
-(void)eraseCapData;
-(void)resetCapDataObject;
-(void)restoreAllCapData;
-(void)saveCapDataWithReason:(id)arg0 ;
-(void)updateCapDataWith:(id)arg0 ofKind:(NSInteger)arg1 ;


@end


#endif