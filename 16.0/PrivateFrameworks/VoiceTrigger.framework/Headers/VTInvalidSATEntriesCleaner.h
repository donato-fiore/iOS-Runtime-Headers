// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTINVALIDSATENTRIESCLEANER_H
#define VTINVALIDSATENTRIESCLEANER_H


#import <Foundation/Foundation.h>


@interface VTInvalidSATEntriesCleaner : NSObject



+(id)cleanupInvalidSATEntriesAtSATRoot:(id)arg0 payloadUtteranceLifeTimeInDays:(NSInteger)arg1 dryRun:(BOOL)arg2 ;
+(id)cleanupOrphanedMetafilesAtURL:(id)arg0 dryRun:(BOOL)arg1 ;
+(id)cleanupOrphanedMetafilesForLanguage:(id)arg0 payloadUtteranceLifeTimeInDays:(NSInteger)arg1 dryRun:(BOOL)arg2 ;
+(id)cleanupPayloadUtterancesExceedingLifeTimeInDays:(NSInteger)arg0 forType:(NSUInteger)arg1 forLanguageCode:(id)arg2 dryRun:(BOOL)arg3 ;


@end


#endif