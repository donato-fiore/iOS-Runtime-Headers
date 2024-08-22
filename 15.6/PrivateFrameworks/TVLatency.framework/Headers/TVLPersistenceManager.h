// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVLPERSISTENCEMANAGER_H
#define TVLPERSISTENCEMANAGER_H


#import <Foundation/Foundation.h>


@interface TVLPersistenceManager : NSObject



+(id)URLForRecording;
+(id)allRecordingPaths;
+(id)documentsDirectory:(id)arg0 ;
+(id)recordingsDirectory:(id)arg0 ;
+(void)eraseAllRecordings;


@end


#endif