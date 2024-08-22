// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGINDEX_H
#define _OSLOGINDEX_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "_OSLogCollectionReference.h"
#import "_OSLogEventStoreMetadata.h"

@interface _OSLogIndex : NSObject {
    NSMutableArray *_fileq;
    _OSLogCollectionReference *_lcr;
    NSString *_file;
    ? _metadata;
    BOOL _metadataValid;
    _OSLogEventStoreMetadata *_metadata2;
}


@property (readonly, nonatomic) NSUInteger endWalltime;
@property (readonly, nonatomic) NSUInteger persistStartWalltime;
@property (readonly, nonatomic) NSUInteger specialStartWalltime;
@property (readonly, nonatomic) *_os_timesync_db_s timesync; // ivar: _tsdb


-(?)_enumerateEntriesInRange:(?)arg0 optionsusingBlock;
-(?)enumerateEntriesInRange:(?)arg0 options:(?)arg1 usingCatalogFilterusingBlock;
-(BOOL)_addFileToIndex:(char *)arg0 error:(*id)arg1 ;
-(BOOL)_buildFileIndex;
-(BOOL)_buildSingleFileIndex:(*id)arg0 ;
-(BOOL)_openTimesyncDatabase;
-(BOOL)_readArchiveMetadata:(*id)arg0 ;
-(BOOL)addReferenceToIndex:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCollection:(id)arg0 buildLocalIndex:(BOOL)arg1 ;
-(id)initWithCollection:(id)arg0 timesync:(struct _os_timesync_db_s *)arg1 metadata:(id)arg2 ;
-(void)_foreachIndexFile:(id)arg0 ;
-(void)dealloc;
-(void)enumerateEntriesFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEntriesFromLastBootWithOptions:(unsigned int)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;
-(void)enumerateFilesUsingBlock:(id)arg0 ;
-(void)insertChunkStore:(id)arg0 ;
-(void)insertIndexFile:(id)arg0 ;


@end


#endif