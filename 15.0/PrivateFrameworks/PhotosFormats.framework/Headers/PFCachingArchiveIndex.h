// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCACHINGARCHIVEINDEX_H
#define PFCACHINGARCHIVEINDEX_H

@class NSString;
@protocol PFCachingArchiveIndex;

#import <Foundation/Foundation.h>


@interface PFCachingArchiveIndex : NSObject <PFCachingArchiveIndex>

 {
    BOOL _loaded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createIndexFromArchiveFile:(id)arg0 tempIndexFile:(id)arg1 ;
-(BOOL)indexFileValid:(char *)arg0 ;
-(BOOL)indexSupported;
-(BOOL)loadIndexFile:(char *)arg0 ;
-(BOOL)loadOrCreateIndex;
-(BOOL)makeAndCacheIndexFileInDirectory:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)indexFileVersion;
-(char *)indexLabel;
-(id)dataArchivePath;
-(id)indexName;
-(id)indexPath:(*id)arg0 ;
-(struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> )archiveLineParserForIndexPath:(id)arg0 ;
-(unsigned int)architectureHash;


@end


#endif