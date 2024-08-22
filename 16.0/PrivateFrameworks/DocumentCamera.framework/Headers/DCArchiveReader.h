// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCARCHIVEREADER_H
#define DCARCHIVEREADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DCArchiveReader : NSObject {
    *archive _archive;
}


@property (copy, nonatomic) NSString *destinationPath; // ivar: _destinationPath
@property (nonatomic) BOOL overwrite; // ivar: _overwrite
@property (nonatomic) BOOL skipsInvisibleHeaders; // ivar: _skipsInvisibleHeaders
@property (copy, nonatomic) NSString *sourcePath; // ivar: _sourcePath
@property (nonatomic) BOOL writesTemporaryFilesInsideDestination; // ivar: _writesTemporaryFilesInsideDestination


-(BOOL)moveContentsOfDirectory:(id)arg0 toDirectory:(id)arg1 resultURLs:(*id)arg2 error:(*id)arg3 ;
-(BOOL)unarchiveResultURLs:(*id)arg0 error:(*id)arg1 ;
-(BOOL)unarchiveSourcePath:(id)arg0 toDestinationPath:(id)arg1 error:(*id)arg2 ;
-(id)incrementalPathInDirectory:(id)arg0 withFilename:(id)arg1 andExtension:(id)arg2 ;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 ;
-(id)temporaryDirectory;


@end


#endif