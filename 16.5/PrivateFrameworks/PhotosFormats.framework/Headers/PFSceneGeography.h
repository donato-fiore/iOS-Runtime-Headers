// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSCENEGEOGRAPHY_H
#define PFSCENEGEOGRAPHY_H

@class NSString;
@protocol PFCachingArchiveIndex;


#import "PFCachingArchiveIndex.h"

@interface PFSceneGeography : PFCachingArchiveIndex <PFCachingArchiveIndex>

 {
    NSString *_dataArchivePath;
    unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> _backingFile;
    *void _floatMap;
    *void _scenes;
    *void _poi;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)indexSupported;
-(BOOL)loadIndexFile:(char *)arg0 fileSize:(NSInteger)arg1 ;
-(BOOL)loadOrCreateIndex;
-(CGFloat)scoreForPOI:(id)arg0 scenes:(id)arg1 maxScenesCount:(NSInteger)arg2 ;
-(NSUInteger)indexFileVersion;
-(char *)indexLabel;
-(id)dataArchivePath;
-(id)indexName;
-(id)scenesByScoreForPOIHash:(id)arg0 ;
-(struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> )archiveLineParserForIndexPath:(id)arg0 ;


@end


#endif