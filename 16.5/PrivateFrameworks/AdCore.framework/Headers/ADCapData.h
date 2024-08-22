// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADCAPDATA_H
#define ADCAPDATA_H

@class NSMutableArray, NSString;


#import "ADSingleton.h"

@interface ADCapData : ADSingleton

@property (retain, nonatomic) NSMutableArray *clickCountData; // ivar: _clickCountData
@property (retain, nonatomic) NSMutableArray *downloadData; // ivar: _downloadData
@property (retain, nonatomic) NSMutableArray *frequencyCapData; // ivar: _frequencyCapData
@property (retain, nonatomic) NSString *keychainKey; // ivar: _keychainKey
@property (nonatomic) NSInteger storageType; // ivar: _storageType
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *toroID; // ivar: _toroID


+(id)sharedInstance;
-(id)capData:(id)arg0 ;
-(id)capDataJSON:(id)arg0 ;
-(id)clickCapObjectForAdamID:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)downloadObjectForAdamID:(id)arg0 ;
-(id)filteredCapData:(id)arg0 maxItems:(NSUInteger)arg1 expirationThresholdInSeconds:(CGFloat)arg2 ;
-(id)init;
-(id)initWithStorageType:(NSInteger)arg0 ;
-(id)initWithStorageType:(NSInteger)arg0 keychainKey:(id)arg1 title:(id)arg2 ;
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