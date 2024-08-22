// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADCAPSERVICE_H
#define ADCAPSERVICE_H

@class ADCapData;

#import <Foundation/Foundation.h>


@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData; // ivar: _capData


-(id)clickCountByLine;
-(id)impressionCountByLine;
-(id)init;
-(void)cleanDownloadData;
-(void)updateCapData:(id)arg0 forType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateClickData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDownloadData:(id)arg0 identifier:(id)arg1 forType:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)updateFrequencyCapData:(id)arg0 ;


@end


#endif