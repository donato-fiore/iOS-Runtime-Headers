// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFTIMEZONELOOKUP_H
#define PFTIMEZONELOOKUP_H

@class NSString;
@protocol PFCachingArchiveIndex;


#import "PFCachingArchiveIndex.h"

@interface PFTimeZoneLookup : PFCachingArchiveIndex <PFCachingArchiveIndex>

 {
    unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> _backingFile;
    *void _timezones;
    *void _rtree;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)indexSupported;
-(BOOL)loadIndexFile:(char *)arg0 fileSize:(NSInteger)arg1 ;
-(BOOL)loadOrCreateIndex;
-(NSUInteger)indexFileVersion;
-(char *)indexLabel;
-(id)indexName;
-(id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(struct CLLocationCoordinate2D )anyCoordinateForTimeZoneName:(id)arg0 ;
-(struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> )archiveLineParserForIndexPath:(id)arg0 ;


@end


#endif