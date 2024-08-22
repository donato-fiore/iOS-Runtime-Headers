// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INSYNCTRANSACTION_H
#define _INSYNCTRANSACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_INVocabularyStoreManager.h"
#import "_INVocabularyGenerationDocument.h"

@interface _INSyncTransaction : NSObject {
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    BOOL _deleteExistingVocabulary;
    BOOL _vocabularyUpdatesEnabled;
}


@property (nonatomic) BOOL fullResetRequired; // ivar: _fullResetRequired
@property (readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument; // ivar: _latest
@property (readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument; // ivar: _sent


+(id)beginTransactionForBundleID:(id)arg0 bundlePath:(id)arg1 syncSlot:(id)arg2 ;
-(BOOL)_isMissingLatestFileError:(id)arg0 ;
-(id)_emptySentDocument;
-(id)_initWithVocabularyManager:(id)arg0 syncSlot:(id)arg1 deleteExistingVocabulary:(BOOL)arg2 ;
-(id)calculateDiff;
-(void)_beginTransaction;
-(void)_deleteInvalidSavedData;
-(void)_saveAndCleanup;
-(void)endTransactionWithFinalAnchor:(id)arg0 ;


@end


#endif