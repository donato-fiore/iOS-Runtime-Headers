// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILIBARCHIVESTREAMINGEXTRACTOR_H
#define _UILIBARCHIVESTREAMINGEXTRACTOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _UILibArchiveStreamingExtractor : NSObject

@property (readonly, nonatomic) NSString *archivePath; // ivar: _archivePath
@property (readonly, nonatomic) NSArray *extractedContentAbsolutePaths; // ivar: _extractedContentAbsolutePaths


+(BOOL)shouldExtractPathInArchive:(id)arg0 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg1 ;
+(id)archiveSubpathByStandardizingArchiveSubpath:(id)arg0 ;
-(BOOL)extractArchivePath:(id)arg0 toDirectory:(id)arg1 error:(*id)arg2 ;
-(id)initForExtractingArchivePath:(id)arg0 ;


@end


#endif