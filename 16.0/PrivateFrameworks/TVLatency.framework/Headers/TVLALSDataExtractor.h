// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVLALSDATAEXTRACTOR_H
#define TVLALSDATAEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface TVLALSDataExtractor : NSObject



-(id)extractALSCalibrationData;
-(unsigned int)_displayID;
-(void)extract:(NSUInteger)arg0 ALSReadings:(id)arg1 ;
-(void)extractALSData:(id)arg0 ;


@end


#endif