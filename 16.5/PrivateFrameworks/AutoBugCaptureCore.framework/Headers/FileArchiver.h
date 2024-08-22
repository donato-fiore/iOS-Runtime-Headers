// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FILEARCHIVER_H
#define FILEARCHIVER_H


#import <Foundation/Foundation.h>


@interface FileArchiver : NSObject {
    *archive _archive;
}




+(id)archiveWithPath:(id)arg0 ;
+(id)archiveWithPath:(id)arg0 destinationDir:(id)arg1 nameMatches:(id)arg2 maxAge:(CGFloat)arg3 allowDirectories:(BOOL)arg4 ;
+(id)archiveWithPaths:(id)arg0 destinationDir:(id)arg1 deleteSource:(BOOL)arg2 ;
+(id)matchFilesInDirectory:(id)arg0 filenamePredicate:(id)arg1 newerThan:(id)arg2 allowDirectories:(BOOL)arg3 ;
-(id)initWithPath:(id)arg0 shouldCompress:(BOOL)arg1 ;
-(int)addDirectoryToArchive:(id)arg0 withDirName:(id)arg1 ;
-(int)addFileToArchive:(id)arg0 withFileName:(id)arg1 ;
-(int)closeArchive;
-(void)moveDirectoryToArchive:(id)arg0 withDirName:(id)arg1 ;


@end


#endif