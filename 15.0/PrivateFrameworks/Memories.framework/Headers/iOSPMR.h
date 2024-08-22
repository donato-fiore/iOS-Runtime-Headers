// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOSPMR_H
#define IOSPMR_H


#import <Foundation/Foundation.h>


@interface iOSPMR : NSObject {
    BOOL gPMR_ENABLED;
}




+(id)sharedInstance;
-(CGFloat)convertNanoSecondsToSeconds:(NSUInteger)arg0 ;
-(CGFloat)returnDelta_Milliseconds:(NSUInteger)arg0 ;
-(NSUInteger)returnDelta_Nanoseconds:(NSUInteger)arg0 ;
-(NSUInteger)returnStartTime_Nanoseconds;
-(id)init;
-(id)stopTimerAndReportPMR:(NSUInteger)arg0 logFilename:(id)arg1 pmrKey:(id)arg2 comment:(id)arg3 ;
-(void)addDelta:(NSUInteger)arg0 toArray:(id)arg1 ;
-(void)dealloc;
-(void)writePMRInfoToFile:(id)arg0 pmrString:(id)arg1 ;


@end


#endif