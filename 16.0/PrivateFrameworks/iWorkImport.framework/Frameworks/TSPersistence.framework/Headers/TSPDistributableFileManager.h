// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDISTRIBUTABLEFILEMANAGER_H
#define TSPDISTRIBUTABLEFILEMANAGER_H

@class NSString, TSUPathSet, NSMutableSet, TSUTemporaryDirectory;

#import <Foundation/Foundation.h>


@interface TSPDistributableFileManager : NSObject {
    NSString *_directoryPath;
    BOOL _shouldCreate;
    TSUPathSet *_claimedPaths;
    NSMutableSet *_newIdentifiers;
    NSMutableSet *_modifiedIdentifiers;
    NSMutableSet *_deletedIdentifiers;
    TSUTemporaryDirectory *_modifiedFilesDirectory;
    BOOL _isCullingDisabled;
}




-(BOOL)commitWithError:(*id)arg0 ;
-(BOOL)prepareForSaveToPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)rehomeOntoPath:(id)arg0 ;
-(id)_claimedPaths;
-(id)_filePathForIdentifier:(id)arg0 ;
-(id)_filePathForModifiedIdentifier:(id)arg0 ;
-(id)_modifiedFilesDirectoryPath;
-(id)addDataFromInputStream:(id)arg0 length:(NSInteger)arg1 filenameHint:(id)arg2 ;
-(id)addDataRepresentation:(id)arg0 filenameHint:(id)arg1 ;
-(id)initWithPath:(id)arg0 shouldCreate:(BOOL)arg1 ;
-(id)representationForIdentifier:(id)arg0 ;
-(void)_writeDataFromInputStream:(id)arg0 length:(NSInteger)arg1 toPath:(id)arg2 ;
-(void)disableFileCulling;
-(void)removeIdentifier:(id)arg0 ;
-(void)setDataFromInputStream:(id)arg0 length:(NSInteger)arg1 forIdentifier:(id)arg2 ;
-(void)setDataRepresentation:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif