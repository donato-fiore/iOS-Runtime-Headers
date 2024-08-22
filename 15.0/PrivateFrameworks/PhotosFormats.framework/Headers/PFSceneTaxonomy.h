// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSCENETAXONOMY_H
#define PFSCENETAXONOMY_H

@class NSString, NSBundle;
@protocol PFCachingArchiveIndex;


#import "PFCachingArchiveIndex.h"
#import "PFSceneTaxonomyNode.h"

@interface PFSceneTaxonomy : PFCachingArchiveIndex <PFCachingArchiveIndex>

 {
    unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>>> _backingFile;
    *void _nameMap;
    *void _sceneMap;
    NSString *_dataPath;
    NSBundle *_localizationBundle;
    NSString *_tableName;
    BOOL _forceIndexed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *digest;
@property (readonly) NSUInteger hash;
@property (readonly) PFSceneTaxonomyNode *rootNode;
@property (readonly) *void rootNodeRef;
@property (readonly, getter=digest) NSString *sha256Hash;
@property (readonly) Class superclass;


+(id)sharedTaxonomy;
-(*void)nodeRefForName:(id)arg0 ;
-(*void)nodeRefForSceneClassId:(unsigned int)arg0 ;
-(BOOL)loadIndexFile:(char *)arg0 ;
-(BOOL)loadOrCreateIndex;
-(NSUInteger)indexFileVersion;
-(NSUInteger)nodeCount;
-(char *)indexLabel;
-(id)dataArchivePath;
-(id)indexName;
-(id)init;
-(id)initWithDataPath:(id)arg0 localizationBundle:(id)arg1 tableName:(id)arg2 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)nodeForName:(id)arg0 ;
-(id)nodeForSceneClassId:(unsigned int)arg0 ;
-(struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> )archiveLineParserForIndexPath:(id)arg0 ;
-(unsigned int)sceneClassIdForName:(id)arg0 ;


@end


#endif