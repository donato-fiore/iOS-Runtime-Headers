// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCUSTOMFORMATLIST_H
#define TSKCUSTOMFORMATLIST_H

@class TSPObject, NSMutableDictionary, TSUNoCopyDictionary, TSUSparseArray, NSMutableSet;
@protocol NSCopying;



@interface TSKCustomFormatList : TSPObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *formatsByKeyDictionary; // ivar: _formatsByKeyDictionary
@property (nonatomic) BOOL importing; // ivar: _importing
@property (nonatomic) BOOL importingDone; // ivar: _importingDone
@property (retain, nonatomic) TSUNoCopyDictionary *indexesByKey; // ivar: _indexesByKey
@property (retain, nonatomic) TSUNoCopyDictionary *keysByFormatDictionary; // ivar: _keysByFormatDictionary
@property (retain, nonatomic) TSUNoCopyDictionary *keysByFormatWithNameStemMatching; // ivar: _keysByFormatWithNameStemMatching
@property (retain, nonatomic) TSUSparseArray *keysByIndex; // ivar: _keysByIndex
@property (retain, nonatomic) NSMutableSet *namesList; // ivar: _namesList
@property (nonatomic) BOOL upgrading; // ivar: _upgrading
@property (nonatomic) BOOL upgradingDone; // ivar: _upgradingDone


+(id)unarchiveKeys:(*void)arg0 ;
+(void)archiveKeys:(id)arg0 message:(*void)arg1 ;
-(BOOL)hasFormatNamed:(id)arg0 ;
-(BOOL)p_validateNameStemCount;
-(NSUInteger)count;
-(NSUInteger)inspectorIndexForKey:(id)arg0 ;
-(id)addCustomFormat:(id)arg0 oldKey:(id)arg1 fuzzyNameMatching:(BOOL)arg2 ;
-(id)addImportedCustomFormat:(id)arg0 ;
-(id)addedKeysRelativeTo:(id)arg0 ;
-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customFormatForKey:(id)arg0 ;
-(id)description;
-(id)initWithContext:(id)arg0 ;
-(id)keyForCustomFormat:(id)arg0 ;
-(id)keyForInspectorIndex:(NSUInteger)arg0 ;
-(id)p_keyForFormatUsingNameStem:(id)arg0 ;
-(id)upgradedCustomFormatKeyForLegacyID:(unsigned int)arg0 ;
-(void)addCustomFormatForUpgrade:(id)arg0 legacyKey:(unsigned int)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_addCustomFormatToNameStemDict:(id)arg0 key:(id)arg1 ;
-(void)p_removeCustomFormatFromNameStemDict:(id)arg0 key:(id)arg1 ;
-(void)p_setCustomFormat:(id)arg0 key:(id)arg1 ;
-(void)p_setCustomFormat:(id)arg0 key:(id)arg1 legacyKey:(unsigned int)arg2 ;
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg0 ;
-(void)removeAll;
-(void)removeCustomFormatForKey:(id)arg0 ;
-(void)removeCustomFormatsForKeys:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)updateCustomFormat:(id)arg0 oldKey:(id)arg1 ;


@end


#endif