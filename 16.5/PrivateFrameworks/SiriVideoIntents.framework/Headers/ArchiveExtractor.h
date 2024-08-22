// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCHIVEEXTRACTOR_H
#define ARCHIVEEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface ArchiveExtractor : NSObject



-(BOOL)copyDataFromReadArchive:(struct archive *)arg0 toWriteDiskArchive:(struct archive *)arg1 ;
-(BOOL)extractArchiveAtURL:(id)arg0 toDestinationDirectoryURL:(id)arg1 ;
-(BOOL)performExtractionForArchive:(struct archive *)arg0 toDestinationDirectory:(id)arg1 ;
-(BOOL)unarchiveData:(id)arg0 toDestinationDirectory:(id)arg1 ;
-(struct archive *)createReadArchive;
-(struct archive *)createWriteDiskArchive;


@end


#endif