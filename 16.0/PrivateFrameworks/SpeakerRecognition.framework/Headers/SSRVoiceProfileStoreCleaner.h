// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRVOICEPROFILESTORECLEANER_H
#define SSRVOICEPROFILESTORECLEANER_H


#import <Foundation/Foundation.h>


@interface SSRVoiceProfileStoreCleaner : NSObject



-(id)_cleanupAppDomain:(id)arg0 ;
-(id)_cleanupContentsOfSatFolder:(id)arg0 ;
-(id)_cleanupImplicitUtteranceCacheForProfile:(id)arg0 ;
-(id)_cleanupInvalidAudioFiles:(id)arg0 ;
-(id)_cleanupOrphanedMetafilesAtURL:(id)arg0 ;
-(id)_cleanupOrphanedMetafilesForProfile:(id)arg0 payloadUtteranceLifeTimeInDays:(NSInteger)arg1 ;
-(id)_cleanupPayloadUtterancesFromProfile:(id)arg0 forModelType:(NSUInteger)arg1 exceedingLifeTimeInDays:(NSInteger)arg2 ;
-(id)_cleanuplanguageCodePath:(id)arg0 forAppDomain:(id)arg1 ;
-(id)cleanupProfileStore;
-(id)filterDuplicatedSiriProfilesFrom:(id)arg0 ;
-(id)filterInvalidSiriProfilesFrom:(id)arg0 ;
-(void)_cleanupModelFilesAtDir:(id)arg0 forAssetArray:(id)arg1 ;
-(void)cleanupInvalidModelsForProfile:(id)arg0 withAssetArray:(id)arg1 ;


@end


#endif