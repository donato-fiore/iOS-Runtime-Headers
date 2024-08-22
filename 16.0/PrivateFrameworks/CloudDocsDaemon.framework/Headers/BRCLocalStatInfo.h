// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCLOCALSTATINFO_H
#define BRCLOCALSTATINFO_H

@class NSNumber, NSString;


#import "BRCStatInfo.h"
#import "BRCGenerationID.h"

@interface BRCLocalStatInfo : BRCStatInfo

@property (readonly, nonatomic) NSNumber *documentID; // ivar: _documentID
@property (readonly, nonatomic) NSNumber *fileID;
@property (readonly, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) BRCGenerationID *generationID; // ivar: _generationID
@property (nonatomic) unsigned char itemScope; // ivar: _itemScope
@property (readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;
@property (readonly, nonatomic) NSNumber *lostStamp;
@property (readonly, nonatomic) NSString *physicalName; // ivar: _physicalName
@property (readonly, nonatomic) NSNumber *processingStamp; // ivar: _processingStamp
@property (retain, nonatomic) NSString *rawBouncedLogicalName; // ivar: _bouncedLogicalName
@property (readonly, nonatomic) NSNumber *stagedFileID; // ivar: _stagedFileID
@property (readonly, nonatomic) NSNumber *stagedFileIDForDB;
@property (readonly, nonatomic) unsigned int stagedGenerationID; // ivar: _stagedGenerationID
@property (readonly, nonatomic) NSNumber *tmpBouncedNo; // ivar: _tmpBouncedNo


+(char)_modeFromRelativePath:(id)arg0 isPackageFault:(BOOL)arg1 ;
+(id)_finderTagsFromRelativePath:(id)arg0 ;
-(BOOL)checkStateWithItemID:(id)arg0 logToFile:(struct __sFILE *)arg1 ;
-(NSUInteger)diffAgainstLocalInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithContext:(id)arg0 origName:(id)arg1 ;
-(id)initAsShareAcceptFaultWithName:(id)arg0 mode:(char)arg1 isDirectory:(BOOL)arg2 ;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithLocalStatInfo:(id)arg0 ;
-(id)initWithRelativePath:(id)arg0 itemID:(id)arg1 parentGlobalID:(id)arg2 ;
-(id)logicalName;
-(void)_bouncePhysicalNameToRepresentableName;
-(void)_clearBouncedName;
-(void)_clearFileID;
-(void)_clearGenerationID;
-(void)_generatedBouncedLogicalFilenameWithBounceNumber:(NSUInteger)arg0 ;
-(void)_markAlmostDead;
-(void)_markClearedFromStage;
-(void)_markDead;
-(void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)arg0 ;
-(void)_markFound;
-(void)_markLiveFromStageAsFault:(BOOL)arg0 ;
-(void)_markLiveFromStageAsType:(char)arg0 ;
-(void)_markLostAddingBackoffWithMode:(unsigned char)arg0 appLibrary:(id)arg1 ;
-(void)_markReserved;
-(void)_markStagedWithFileID:(id)arg0 generationID:(unsigned int)arg1 documentID:(id)arg2 ;
-(void)_migrateTmpBouncedNameToLocalName;
-(void)_moveItemAsideWithUUIDString;
-(void)_setCKInfo:(id)arg0 ;
-(void)_setParentID:(id)arg0 ;
-(void)_updateMetadataFromFSAtPath:(id)arg0 itemID:(id)arg1 parentGlobalID:(id)arg2 isPackageFault:(BOOL)arg3 readonlyShareChild:(BOOL)arg4 ;
-(void)_updateStatAliasMeta:(id)arg0 ;
-(void)_updateStatMeta:(id)arg0 ;
-(void)_updateStatMetaFromServer:(id)arg0 ;
-(void)updateAsAppLibraryRoot:(id)arg0 ;
-(void)updateFilenameFromPath:(id)arg0 ;
-(void)updateFromFSAtPath:(id)arg0 itemID:(id)arg1 parentGlobalID:(id)arg2 isPackageFault:(BOOL)arg3 readonlyShareChild:(BOOL)arg4 ;
-(void)updateLocationAndMetaFromFSAtPath:(id)arg0 itemID:(id)arg1 parentGlobalID:(id)arg2 isPackageFault:(BOOL)arg3 readonlyShareChild:(BOOL)arg4 ;


@end


#endif