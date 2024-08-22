// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLLOGUTILITY_H
#define APODMLLOGUTILITY_H


#import <Foundation/Foundation.h>


@interface APOdmlLogUtility : NSObject



+(id)printDESRecordInSegments:(id)arg0 isPlugin:(BOOL)arg1 ;
+(void)logModelInputWithAdamID:(id)arg0 adamID:(id)arg1 ;
+(void)logWithLoggerKey:(id)arg0 message:(id)arg1 category:(NSUInteger)arg2 ;
+(void)printDESRecordRowOrder:(id)arg0 iterationNumber:(id)arg1 ;


@end


#endif