// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLLOGUTILITY_H
#define APODMLLOGUTILITY_H


#import <Foundation/Foundation.h>


@interface APOdmlLogUtility : NSObject



+(id)printDESRecordInSegments:(id)arg0 isPlugin:(BOOL)arg1 ;
+(id)printInSegments:(id)arg0 log:(id)arg1 isPlugin:(BOOL)arg2 ;
+(id)printModelDeltasInSegments:(id)arg0 isPlugin:(BOOL)arg1 ;
+(void)logModelInputWithAdamID:(id)arg0 adamID:(id)arg1 ;
+(void)logTrainingRowFeatures:(id)arg0 ;
+(void)logWithLoggerKey:(id)arg0 message:(id)arg1 category:(NSUInteger)arg2 ;
+(void)printDESRecordRowOrder:(id)arg0 iterationNumber:(id)arg1 ;


@end


#endif