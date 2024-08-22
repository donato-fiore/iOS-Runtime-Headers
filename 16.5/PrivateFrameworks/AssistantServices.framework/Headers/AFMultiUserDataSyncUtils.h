// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFMULTIUSERDATASYNCUTILS_H
#define AFMULTIUSERDATASYNCUTILS_H


#import <Foundation/Foundation.h>


@interface AFMultiUserDataSyncUtils : NSObject



+(id)audioAppSignalsDataKey;
+(id)audioAppSignalsLastSyncTimestampKey;
+(id)audioAppSignalsTimestampKey;
+(id)localTime;
+(id)retrieveAudioAppSignals;
+(id)suiteName;
+(void)storeAudioAppSignals:(id)arg0 ;


@end


#endif