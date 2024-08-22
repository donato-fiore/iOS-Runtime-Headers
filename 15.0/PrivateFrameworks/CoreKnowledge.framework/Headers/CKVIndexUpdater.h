// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVINDEXUPDATER_H
#define CKVINDEXUPDATER_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVIndexUpdaterFactory.h"
#import "CKVSettings.h"

@interface CKVIndexUpdater : NSObject {
    CKVIndexManager *_idxMgr;
    CKVIndexUpdaterFactory *_updaterFactory;
    CKVSettings *_settings;
}




-(BOOL)_updateIndexesWithFullSetOfItems:(id)arg0 ofType:(NSInteger)arg1 originApp:(id)arg2 ;
-(BOOL)_updateIndexesWithStream:(id)arg0 ofType:(NSInteger)arg1 originApp:(id)arg2 ;
-(BOOL)applyFullSetVocabularyDonation:(id)arg0 ;
-(BOOL)applyStreamDonationOfType:(NSInteger)arg0 originApp:(id)arg1 streamManager:(id)arg2 ;
-(BOOL)rebuildSkitWithAllVocabulary;
-(NSUInteger)_deleteAllItems:(id)arg0 emptyDonation:(BOOL)arg1 ftsUpdater:(id)arg2 skitUpdater:(id)arg3 options:(NSUInteger)arg4 ;
-(NSUInteger)_deleteStaleItems:(id)arg0 ftsUpdater:(id)arg1 skitUpdater:(id)arg2 options:(NSUInteger)arg3 ;
-(NSUInteger)_diffUpdateItems:(id)arg0 itemType:(NSInteger)arg1 itemUpdater:(id)arg2 ftsUpdater:(id)arg3 skitUpdater:(id)arg4 options:(NSUInteger)arg5 ;
-(NSUInteger)_insertAllItems:(id)arg0 itemType:(NSInteger)arg1 itemUpdater:(id)arg2 ftsUpdater:(id)arg3 skitUpdater:(id)arg4 options:(NSUInteger)arg5 ;
-(id)initWithIndexManager:(id)arg0 indexUpdaterFactory:(id)arg1 settings:(id)arg2 ;
-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(void)_logSkitUpdate:(NSUInteger)arg0 skitUpdater:(id)arg1 typeDescription:(id)arg2 origin:(id)arg3 ;


@end


#endif