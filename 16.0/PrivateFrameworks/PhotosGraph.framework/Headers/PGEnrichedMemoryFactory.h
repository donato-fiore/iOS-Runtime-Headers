// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGENRICHEDMEMORYFACTORY_H
#define PGENRICHEDMEMORYFACTORY_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGMoodKeywordComputer.h"
#import "PGMemoryCurationSession.h"
#import "PGTitleGenerationContext.h"

@interface PGEnrichedMemoryFactory : NSObject {
    PGMoodKeywordComputer *_moodKeywordComputer;
    NSObject<OS_os_log> *_loggingConnection;
    PGMemoryCurationSession *_memoryCurationSession;
    PGTitleGenerationContext *_titleGenerationContext;
}




+(CGFloat)notificationScoreForNotificationLevel:(NSInteger)arg0 electionScore:(CGFloat)arg1 ;
+(NSInteger)notificationLevelForTriggeredMemory:(id)arg0 withLocalDate:(id)arg1 graph:(id)arg2 ;
+(void)requestFlexMusicCurationForEnrichedMemories:(id)arg0 photoLibrary:(id)arg1 progressReporter:(id)arg2 resultHandler:(id)arg3 ;
+(void)requestMusicCurationForEnrichedMemories:(id)arg0 context:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 resultHandler:(id)arg4 ;
-(NSUInteger)_numberOfGuestAssetInAssets:(id)arg0 ;
-(id)_curatedAssetsWithFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)_extendedCuratedAssetsWithFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)_keyAssetWithFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)_memoryEnricherFromTriggeredMemory:(id)arg0 ;
-(id)curatedAssetUUIDsWithTriggeredMemory:(id)arg0 keyAsset:(id)arg1 extendedCuratedAssetUUIDs:(id)arg2 targetCurationDuration:(CGFloat)arg3 graph:(id)arg4 allowGuestAsset:(BOOL)arg5 progressReporter:(id)arg6 ;
-(id)debugEnrichedMemoryWithTriggeredMemory:(id)arg0 withConfiguration:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 ;
-(id)enrichedMemoryWithTriggeredMemory:(id)arg0 withConfiguration:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 ;
-(id)enrichedMemoryWithTriggeredMemory:(id)arg0 withConfiguration:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 debug:(BOOL)arg4 ;
-(id)initWithMemoryCurationSession:(id)arg0 graph:(id)arg1 loggingConnection:(id)arg2 ;


@end


#endif