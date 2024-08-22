// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IIPATHS_H
#define IIPATHS_H


#import <Foundation/Foundation.h>


@interface IIPaths : NSObject



+(id)filename:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)resourcesDirectory;
+(id)subdirectory:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)suggestionsDirectory;
+(id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)arg0 ;
+(id)suggestionsDirectoryFile:(id)arg0 ;
+(id)suggestionsDirectoryFile:(id)arg0 creatingSuggestionsDirectoryIfNeeded:(BOOL)arg1 ;
+(id)suggestionsSubdirectory:(id)arg0 ;
+(id)suggestionsSubdirectory:(id)arg0 creatingDirectoriesIfNeeded:(BOOL)arg1 ;
+(id)topDirectory;
+(id)topDirectoryCreateIfNeeded:(BOOL)arg0 ;
+(id)topDirectoryWithName:(id)arg0 createIfNeeded:(BOOL)arg1 ;


@end


#endif