// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLITDBGENIUSDATABASE_H
#define MLITDBGENIUSDATABASE_H


#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface MLITDBGeniusDatabase : NSObject

@property (readonly, nonatomic) ML3MusicLibrary *musicLibrary;


+(id)sharedGeniusDatabase;
-(BOOL)_copyBlobData:(*id)arg0 blobAllocType:(int)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4 ;
-(BOOL)_hasAnySongs;
-(BOOL)_hasRowsInTable:(id)arg0 ;
-(BOOL)_readBlobForRowID:(NSUInteger)arg0 intoData:(id)arg1 table:(char *)arg2 blobColumn:(char *)arg3 ;
-(BOOL)_readBlobIntoData:(id)arg0 table:(id)arg1 blobColumn:(id)arg2 where:(id)arg3 ;
-(BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)arg0 ;
-(BOOL)getGeniusMetadataDataAndBytesForGlobalID:(NSUInteger)arg0 intoData:(id)arg1 ;
-(BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(NSUInteger)arg0 intoData:(id)arg1 ;
-(BOOL)hasGeniusDataAvailable;
-(BOOL)hasGeniusFeatureEnabled;
-(NSUInteger)_getInt64ValueInTable:(id)arg0 column:(id)arg1 where:(id)arg2 limit:(unsigned int)arg3 ;
-(NSUInteger)defaultMinTrackCount;
-(NSUInteger)defaultTrackCount;
-(id)_copyBlobDataAndBytesInTable:(id)arg0 blobColumn:(id)arg1 where:(id)arg2 ;
-(id)copyGeniusConfigrationDataAndBytes;
-(id)copyGeniusMetadataDataAndBytesForGlobalID:(NSUInteger)arg0 ;
-(id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(NSUInteger)arg0 ;
-(id)init;
-(unsigned int)_getInt32ValueInTable:(id)arg0 column:(id)arg1 ;
-(unsigned int)geniusConfigurationVersion;
-(void)performGeniusDatabaseReadWithBlock:(id)arg0 ;


@end


#endif