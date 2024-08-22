// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDASSETHANDLE_H
#define CKDASSETHANDLE_H

@class CKObject, NSUUID, NSNumber, NSData, NSString;



@interface CKDAssetHandle : CKObject

@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSNumber *chunkCount; // ivar: _chunkCount
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (retain, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (retain, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (retain, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (retain, nonatomic) NSNumber *lastUsedTime; // ivar: _lastUsedTime
@property (retain, nonatomic) NSNumber *modTime; // ivar: _modTime
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *volumeIndex; // ivar: _volumeIndex


+(id)CKSQLiteClassName;
+(id)descriptionWithStatus:(NSInteger)arg0 ;
-(BOOL)isEqualRevisionOfAssetHandle:(id)arg0 differencesDescription:(*id)arg1 ;
-(BOOL)isEqualToAssetHandle:(id)arg0 keys:(id)arg1 differencesDescription:(*id)arg2 ;
-(BOOL)mayBeEvicted;
-(BOOL)mayHaveAssetCacheManagedFile;
-(BOOL)shouldBeUnregisteredBeforeDeleted;
-(id)CKPropertiesDescription;
-(id)description;
-(id)dictionaryPropertyEncoding;
-(id)initWithItemID:(id)arg0 UUID:(id)arg1 path:(id)arg2 ;
-(id)initWithPropertyDictionary:(id)arg0 ;


@end


#endif