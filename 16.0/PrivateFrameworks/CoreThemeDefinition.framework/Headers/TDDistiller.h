// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDDISTILLER_H
#define TDDISTILLER_H

@class CUIMutableCommonAssetStorage, NSMutableArray, NSArray, NSString, NSThread, NSUUID;

#import <Foundation/Foundation.h>

#import "CoreThemeDocument.h"
#import "TDLogger.h"

@interface TDDistiller : NSObject {
    CoreThemeDocument *_document;
    CUIMutableCommonAssetStorage *_assetStore;
    NSMutableArray *_renditionEntries;
    NSArray *_changedProductions;
    NSArray *_mainThreadPerformRunLoopModes;
    int _fileCompression;
}


@property (retain, nonatomic) NSString *accumulatedErrorDescription; // ivar: _accumulatedErrorDescription
@property NSInteger assetStoreVersionNumber; // ivar: _assetStoreVersionNumber
@property (copy) NSString *assetStoreVersionString; // ivar: _assetStoreVersionString
@property (retain) NSThread *callbackThread; // ivar: _callbackThread
@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL dontPackRenditionsBeforeDistilling; // ivar: _dontPackRenditionsBeforeDistilling
@property int fileCompression;
@property (getter=isFinished) BOOL finished; // ivar: _finished
@property (getter=isIncremental) BOOL incremental; // ivar: _incremental
@property (retain) TDLogger *logger; // ivar: _logger
@property (getter=isSuccessful) BOOL successful; // ivar: _successful
@property (readonly, nonatomic) NSUUID *uuid;


-(BOOL)_distillColorDefinitions:(id)arg0 ;
-(BOOL)_distillCursorFacetDefinitions:(id)arg0 ;
-(BOOL)_distillFonts:(id)arg0 ;
-(BOOL)_distillNamedElements:(id)arg0 ;
-(BOOL)_setupWithOutputPath:(id)arg0 attemptIncremental:(BOOL)arg1 ;
-(BOOL)assetStoreWriteToDisk;
-(BOOL)distillCatalogGlobals;
-(BOOL)distillCursorFacetDefinitions;
-(BOOL)distillCustomColors;
-(BOOL)distillCustomFontSizes;
-(BOOL)distillCustomFonts;
-(BOOL)distillLocalizationss;
-(BOOL)distillNamedElements;
-(BOOL)distillRenditions;
-(BOOL)distillThemeAppearances;
-(BOOL)setAsset:(id)arg0 withKey:(struct _renditionkeytoken *)arg1 fromRenditionSpec:(id)arg2 ;
-(NSUInteger)_removeRenditionsWithKeySpecs:(id)arg0 ;
-(id)_copyStandardEffectDefinitions;
-(id)_filterRenditions:(id)arg0 ;
-(id)_keyDataFromKey:(struct _renditionkeytoken *)arg0 ;
-(id)_keySpecsToRemoveFromKeySpecs:(id)arg0 ;
-(id)_productionForRenditionSpec:(id)arg0 ;
-(id)_renditionsFromProductions:(id)arg0 error:(*id)arg1 ;
-(id)_renditionsWithError:(*id)arg0 ;
-(id)_textureFaceExclusionPredicate;
-(id)dateOfLastDistill;
-(id)documentPath;
-(id)initWithDocument:(id)arg0 outputPath:(id)arg1 ;
-(id)initWithDocument:(id)arg0 outputPath:(id)arg1 attemptIncremental:(BOOL)arg2 ;
-(id)initWithDocument:(id)arg0 outputPath:(id)arg1 attemptIncremental:(BOOL)arg2 versionString:(id)arg3 ;
-(id)initWithDocument:(id)arg0 outputPath:(id)arg1 versionString:(id)arg2 ;
-(id)keyFormatData;
-(void)_accumulateErrorDescription:(id)arg0 ;
-(void)_distill:(id)arg0 ;
-(void)_distillChanges:(id)arg0 ;
-(void)_logError:(id)arg0 ;
-(void)_logErrorAndAccumulateDescription:(id)arg0 ;
-(void)_logExtra:(id)arg0 ;
-(void)_logInfo:(id)arg0 ;
-(void)_logWarning:(id)arg0 ;
-(void)_resetDocumentUuid:(id)arg0 ;
-(void)cancelDistill;
-(void)dealloc;
-(void)finishDistillationWithSuccess:(BOOL)arg0 ;
-(void)markDistillationAsFinished;
-(void)performSelectorOnCallbackThread:(SEL)arg0 withObject:(id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)removeRenditionsFromAssetStoreWithKey:(id)arg0 ;
-(void)saveAndDistillWithCompletionHandler:(id)arg0 ;
-(void)setAssetColorSpaceID:(unsigned int)arg0 ;
-(void)setAssetSchemaVersion:(unsigned int)arg0 ;
-(void)setAssetStorageVersion:(unsigned int)arg0 ;
-(void)setAssetStorageVersionString:(char *)arg0 ;
-(void)setAssetStoreAssociatedChecksum:(unsigned int)arg0 ;
-(void)setAssetStoreKeyFormatData:(id)arg0 ;
-(void)setAssetStoreKeySemantics:(int)arg0 ;
-(void)setAssetStoreRenditionCount:(unsigned int)arg0 ;
-(void)setAssetStoreUuid:(id)arg0 ;
-(void)waitTimerDidFire:(id)arg0 ;
-(void)waitUntilFinished;


@end


#endif