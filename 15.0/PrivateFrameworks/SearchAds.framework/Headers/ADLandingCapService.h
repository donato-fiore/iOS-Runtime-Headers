// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADLANDINGCAPSERVICE_H
#define ADLANDINGCAPSERVICE_H

@class ADLandingCapData;

#import <Foundation/Foundation.h>


@interface ADLandingCapService : NSObject

@property (retain, nonatomic) ADLandingCapData *landingCapData; // ivar: _landingCapData


-(id)clickCountByLine;
-(id)impressionCountByLine;
-(id)init;
-(void)cleanDownloadData;
-(void)updateCapData:(id)arg0 forType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateClickData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDownloadData:(id)arg0 forType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateFrequencyCapData:(id)arg0 ;


@end


#endif