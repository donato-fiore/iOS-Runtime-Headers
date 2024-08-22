// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPARCHIVERBASE_H
#define TSPARCHIVERBASE_H

@class NSMutableDictionary, NSDictionary, NSHashTable, NSString;
@protocol TSPArchivableContent;

#import <Foundation/Foundation.h>

#import "_TtC13TSPersistence23TSPMutableIdentifierSet.h"
#import "TSPObject.h"
#import "TSPReferenceOrderedSet.h"

@interface TSPArchiverBase : NSObject <TSPArchivableContent>

 {
    unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> _message;
    *void _fieldRules;
    *void _currentFieldPath;
    NSMutableDictionary *_alternates;
}


@property (readonly, nonatomic) NSDictionary *alternates;
@property (readonly, nonatomic) _TtC13TSPersistence23TSPMutableIdentifierSet *countedDataReferences; // ivar: _countedDataReferences
@property (readonly, nonatomic) *void currentFieldPath;
@property (readonly, nonatomic) NSHashTable *dataReferences; // ivar: _dataReferences
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void fieldPath;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) BOOL isDiff;
@property (readonly, nonatomic) BOOL isForCopy;
@property (readonly, nonatomic) BOOL isSavingCollaborativeDocument;
@property (readonly, nonatomic) BOOL isSavingDocumentAs;
@property (readonly, nonatomic) NSHashTable *lazyReferences; // ivar: _lazyReferences
@property (readonly, nonatomic) unsigned int messageType;
@property (readonly, nonatomic) NSUInteger messageVersion;
@property (nonatomic) NSUInteger messageVersion; // ivar: _messageVersion
@property (readonly, nonatomic) NSUInteger minimumSupportedVersion;
@property (readonly, nonatomic) TSPObject *object; // ivar: _object
@property (readonly, nonatomic) TSPReferenceOrderedSet *strongReferences; // ivar: _strongReferences
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger targetType;
@property (readonly, nonatomic) TSPReferenceOrderedSet *weakReferences; // ivar: _weakReferences


-(*void)baseFieldPathAndReturnShouldDeleteReturnedValue:(*BOOL)arg0 ;
-(id)addAlternateArchiverForVersion:(NSUInteger)arg0 fieldPath:(*void)arg1 isDiffArchiver:(BOOL)arg2 diffReadVersion:(NSUInteger)arg3 message:(struct Message *)arg4 ;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 field:(int)arg2 message:(struct Message *)arg3 ;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 fieldPath:(*int)arg2 baseFieldPath:(*void)arg3 message:(struct Message *)arg4 ;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 fieldPath:(*int)arg2 message:(struct Message *)arg3 ;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 message:(struct Message *)arg2 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(struct Message *)message;
-(struct Message *)messageWithNewFunction:(*unk)arg0 descriptor:(*void)arg1 ;
-(void)addWeakReferenceToObjectUUID:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)enumerateFieldRulesUsingBlock:(id)arg0 ;
-(void)pushScopeForField:(int)arg0 message:(struct Message *)arg1 usingBlock:(id)arg2 ;
-(void)releaseMessage;
-(void)setDataReference:(id)arg0 message:(*void)arg1 ;
-(void)setDataReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setDataReferenceOrderedSet:(id)arg0 message:(*void)arg1 ;
-(void)setDataReferenceSet:(id)arg0 message:(*void)arg1 ;
-(void)setIgnoreAndPreserveRuleForField:(int)arg0 message:(struct Message *)arg1 ;
-(void)setIgnoreAndPreserveRuleForFieldPath:(*int)arg0 message:(struct Message *)arg1 ;
-(void)setIgnoreAndPreserveUntilModifiedRuleForField:(int)arg0 message:(struct Message *)arg1 ;
-(void)setIgnoreAndPreserveUntilModifiedRuleForFieldPath:(*int)arg0 message:(struct Message *)arg1 ;
-(void)setMustUnderstandRuleForField:(int)arg0 message:(struct Message *)arg1 ;
-(void)setMustUnderstandRuleForFieldPath:(*int)arg0 message:(struct Message *)arg1 ;
-(void)setRule:(int)arg0 forFieldPath:(*int)arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3 message:(struct Message *)arg4 ;
-(void)setSparseReferenceArray:(id)arg0 isWeak:(BOOL)arg1 message:(*void)arg2 ;
-(void)setSparseReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setSparseWeakObjectUUIDPathReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setSparseWeakObjectUUIDReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setSparseWeakReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setStrongLazyReference:(id)arg0 message:(*void)arg1 ;
-(void)setStrongLazyReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setStrongReference:(id)arg0 message:(*void)arg1 ;
-(void)setStrongReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setStrongReferenceOrderedSet:(id)arg0 message:(*void)arg1 ;
-(void)setStrongReferenceSet:(id)arg0 message:(*void)arg1 ;
-(void)setWeakLazyReference:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReference:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceArray:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceOrderedSet:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceSet:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceToObjectUUID:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceToObjectUUIDArray:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceToObjectUUIDData:(*void)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceToObjectUUIDPath:(id)arg0 message:(*void)arg1 ;
-(void)setWeakReferenceToObjectUUIDPathArray:(id)arg0 message:(*void)arg1 ;
-(void)validateMessage:(struct Message *)arg0 ;


@end


#endif