// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTRIALWRAPPER_H
#define PPTRIALWRAPPER_H

@class _PASLock, NSDictionary, TRIClient, NSString;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"

@interface PPTrialWrapper : NSObject {
    _PASLock *_lock;
    NSDictionary *_namespaceNamesIdsDict;
    BOOL _useDefaultFiles;
    PPSQLDatabase *_db;
    TRIClient *_trialClient;
}


@property (readonly) NSString *concatenatedTreatmentNames; // ivar: _concatenatedTreatmentNames
@property (readonly) unsigned int treatmentsHash; // ivar: _treatmentsHash


+(id)sharedInstance;
+(id)sharedTrialClient;
-(BOOL)hasFactor:(id)arg0 namespaceName:(id)arg1 ;
-(BOOL)hasModel:(id)arg0 namespaceName:(id)arg1 ;
-(BOOL)hasOverrideForFileFactor:(id)arg0 namespaceName:(id)arg1 ;
-(id)_loadMLModelForModelName:(id)arg0 namespaceName:(id)arg1 error:(*id)arg2 ;
-(id)addUpdateHandlerForNamespaceName:(id)arg0 block:(id)arg1 ;
-(id)defaultFilepathForFactor:(id)arg0 namespaceName:(id)arg1 ;
-(id)directoryForFactorName:(id)arg0 namespaceName:(id)arg1 ;
-(id)filepathForFactor:(id)arg0 namespaceName:(id)arg1 ;
-(id)filepathForFactorName:(id)arg0 namespaceName:(id)arg1 isDirectory:(BOOL)arg2 ;
-(id)initWithSettings:(id)arg0 database:(id)arg1 trialClient:(id)arg2 ;
-(id)lastTreatmentUpdate;
-(id)lastTreatmentUpdateForNamespaceName:(id)arg0 ;
-(id)lazyPlistForFactorName:(id)arg0 namespaceName:(id)arg1 error:(*id)arg2 ;
-(id)levelForFactor:(id)arg0 namespaceName:(id)arg1 ;
-(id)mlModelForModelName:(id)arg0 namespaceName:(id)arg1 error:(*id)arg2 ;
-(id)mlModelPathForModelName:(id)arg0 namespaceName:(id)arg1 error:(*id)arg2 ;
-(id)plistForFactorName:(id)arg0 namespaceName:(id)arg1 ;
-(id)readableTreatmentsMapping;
-(id)treatmentNameForNamespaceName:(id)arg0 ;
-(id)trieForFactorName:(id)arg0 namespaceName:(id)arg1 ;
-(void)_addDefaultUpdateHandlersForAllNamespacesWithGuardedData:(id)arg0 ;
-(void)_updateConcatenatedTreatmentNamesAndHash;
-(void)callRegisteredUpdateHandlers;
-(void)callRegisteredUpdateHandlersForNamespaceName:(id)arg0 ;
-(void)clearOverrideFilepathForFileFactor:(id)arg0 namespaceName:(id)arg1 ;
-(void)dealloc;
-(void)overrideFilepathForFileFactor:(id)arg0 namespaceName:(id)arg1 path:(id)arg2 ;
-(void)removeUpdateHandlerForToken:(id)arg0 ;
-(void)setUseDefaultFiles:(BOOL)arg0 ;


@end


#endif