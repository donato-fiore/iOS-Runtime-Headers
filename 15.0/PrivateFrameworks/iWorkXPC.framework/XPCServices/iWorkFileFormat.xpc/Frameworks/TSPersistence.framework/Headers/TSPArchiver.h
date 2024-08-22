// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPARCHIVER_H
#define TSPARCHIVER_H

@class NSMutableSet, NSHashTable, NSSet, NSUUID;
@protocol OS_dispatch_group, OS_dispatch_data;


#import "TSPArchiverBase.h"
#import "TSPUnknownContentSnapshot.h"
#import "_TtC13TSPersistence23TSPMutableIdentifierSet.h"
#import "TSPReferenceOrderedSet.h"
#import "TSPObject.h"

@interface TSPArchiver : TSPArchiverBase {
    uint8_t _flags;
    TSPUnknownContentSnapshot *_unknownContentSnapshot;
    NSMutableSet *_featureInfos;
}


@property (readonly, nonatomic) _TtC13TSPersistence23TSPMutableIdentifierSet *aggregatedCountedDataReferences; // ivar: _aggregatedCountedDataReferences
@property (readonly, nonatomic) NSHashTable *aggregatedDataReferences; // ivar: _aggregatedDataReferences
@property (readonly, nonatomic) NSHashTable *aggregatedLazyReferences; // ivar: _aggregatedLazyReferences
@property (readonly, nonatomic) TSPReferenceOrderedSet *aggregatedStrongReferences; // ivar: _aggregatedStrongReferences
@property (readonly, nonatomic) TSPReferenceOrderedSet *aggregatedWeakReferences; // ivar: _aggregatedWeakReferences
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *archiveGroup; // ivar: _archiveGroup
@property (readonly, nonatomic) TSPObject *explicitComponentRootObject; // ivar: _explicitComponentRootObject
@property (readonly, nonatomic) NSSet *featureInfos;
@property (nonatomic) NSUInteger messageVersion;
@property (readonly, nonatomic) BOOL needsToScheduleArchive;
@property (readonly, nonatomic) NSUUID *objectUUID; // ivar: _objectUUID
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *serializeGroup; // ivar: _serializeGroup
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // ivar: _serializedData
@property (readonly, nonatomic) BOOL shouldSaveAlternates;
@property (readonly, nonatomic) BOOL success;


-(BOOL)beginArchive;
-(BOOL)beginWrite;
-(BOOL)isSavingCollaborativeDocument;
-(BOOL)isSavingDocumentAs;
-(BOOL)updateMessageInfo:(*void)arg0 withArchiver:(id)arg1 ;
-(id)addAlternateArchiverForVersion:(NSUInteger)arg0 fieldPath:(*void)arg1 isDiffArchiver:(BOOL)arg2 diffReadVersion:(NSUInteger)arg3 message:(struct Message *)arg4 ;
-(id)alternateForVersion:(NSUInteger)arg0 ;
-(id)calculateOrderedArchivableContent;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 flags:(char)arg1 ;
-(void)addDocumentFeatureInfoWithIdentifier:(id)arg0 readVersion:(NSUInteger)arg1 writeVersion:(NSUInteger)arg2 validatingValues:(BOOL)arg3 ;
-(void)aggregateReferencesFromArchiver:(id)arg0 ;
-(void)archive;
-(void)cleanup;
-(void)fail;
-(void)requiresDocumentReadVersion:(NSUInteger)arg0 writeVersion:(NSUInteger)arg1 ;
-(void)requiresDocumentReadVersion:(NSUInteger)arg0 writeVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 ;
-(void)requiresDocumentVersion:(NSUInteger)arg0 ;
-(void)requiresDocumentVersion:(NSUInteger)arg0 featureIdentifier:(id)arg1 ;
-(void)serialize;
-(void)validateOrderedArchivableContent:(id)arg0 ;
-(void)willScheduleArchive;


@end


#endif