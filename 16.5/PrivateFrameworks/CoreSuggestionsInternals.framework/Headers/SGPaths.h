// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGPATHS_H
#define SGPATHS_H

@class HVPathsBase;



@interface SGPaths : HVPathsBase



+(id)suggestionsDirectory;
+(id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)arg0 ;
+(id)suggestionsDirectoryFile:(id)arg0 ;
+(id)suggestionsDirectoryFile:(id)arg0 creatingSuggestionsDirectoryIfNeeded:(BOOL)arg1 ;
+(id)suggestionsSubdirectory:(id)arg0 ;
+(id)suggestionsSubdirectory:(id)arg0 creatingDirectoriesIfNeeded:(BOOL)arg1 ;
+(id)topDirectoryCreateIfNeeded:(BOOL)arg0 ;


@end


#endif