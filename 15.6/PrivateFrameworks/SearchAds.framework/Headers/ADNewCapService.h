// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADNEWCAPSERVICE_H
#define ADNEWCAPSERVICE_H

@class ADCapData;

#import <Foundation/Foundation.h>


@interface ADNewCapService : NSObject

@property (retain, nonatomic) ADCapData *capData; // ivar: _capData
@property (nonatomic) CGFloat clickExpirationThresholdInSeconds; // ivar: _clickExpirationThresholdInSeconds
@property (nonatomic) CGFloat frequencyCapExpirationInSeconds; // ivar: _frequencyCapExpirationInSeconds
@property (nonatomic) NSUInteger maxClickCapElements; // ivar: _maxClickCapElements
@property (nonatomic) NSUInteger maxFrequencyCapElements; // ivar: _maxFrequencyCapElements
@property (nonatomic) NSInteger storageType; // ivar: _storageType


-(id)clickCountByLine;
-(id)impressionCountByLine;
-(id)init;
-(id)initWithStorageType:(NSInteger)arg0 ;
-(void)cleanDownloadData;
-(void)updateCapData:(id)arg0 forType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateClickData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDownloadData:(id)arg0 forType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateFrequencyCapData:(id)arg0 ;


@end


#endif