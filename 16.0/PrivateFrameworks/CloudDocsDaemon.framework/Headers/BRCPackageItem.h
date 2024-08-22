// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCPACKAGEITEM_H
#define BRCPACKAGEITEM_H

@class NSString, NSData;
@protocol PQLResultSetInitializer;

#import <Foundation/Foundation.h>

#import "BRCGenerationID.h"

@interface BRCPackageItem : NSObject <PQLResultSetInitializer>

 {
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _isDirty;
}


@property (readonly, nonatomic) NSInteger assetRank; // ivar: _assetRank
@property (readonly, nonatomic) NSData *contentSignature;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fileID; // ivar: _fileID
@property (readonly, nonatomic) BRCGenerationID *generationID; // ivar: _generationID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) char mode; // ivar: _mode
@property (readonly, nonatomic) NSInteger mtime; // ivar: _mtime
@property (readonly, nonatomic) NSUInteger packageDocumentID; // ivar: _packageID
@property (readonly, nonatomic) NSString *pathInPackage; // ivar: _pathInPackage
@property (readonly, nonatomic) NSData *quarantineInfo; // ivar: _quarantineInfo
@property (readonly, nonatomic) NSInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSData *xattrSignature; // ivar: _xattrSignature


+(BOOL)_deleteSnapshotAtPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)_rescanDirectoryInPackage:(id)arg0 error:(*id)arg1 ;
+(BOOL)dumpSession:(id)arg0 toContext:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
+(BOOL)packageChangedAtRelativePath:(id)arg0 ;
+(BOOL)updateSignaturesForFilesInItem:(id)arg0 fromCKPackage:(id)arg1 error:(*id)arg2 ;
+(BOOL)updateSnapshotAtPath:(id)arg0 error:(*id)arg1 ;
+(NSInteger)aggregatePackageSizeForPackageID:(unsigned int)arg0 db:(id)arg1 ;
+(NSInteger)largestPackageItemSizeInDocumentID:(unsigned int)arg0 session:(id)arg1 ;
+(id)packageItemForRelpath:(id)arg0 ;
+(id)packageItemWithDocumentID:(unsigned int)arg0 relativePath:(id)arg1 db:(id)arg2 ;
+(id)packageItemsForDocumentID:(unsigned int)arg0 order:(NSUInteger)arg1 db:(id)arg2 ;
+(id)packageItemsForItem:(id)arg0 order:(NSUInteger)arg1 ;
-(BOOL)changedAtRelpath:(id)arg0 ;
-(BOOL)saveToDBWithSession:(id)arg0 ;
-(BOOL)setDirty:(BOOL)arg0 session:(id)arg1 ;
-(id)initFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)initWithPBItem:(id)arg0 forLocalItem:(id)arg1 ;
-(id)initWithRelativePath:(id)arg0 markDirty:(BOOL)arg1 ;
-(void)_setXattrs:(id)arg0 session:(id)arg1 ;


@end


#endif