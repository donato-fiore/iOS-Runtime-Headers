// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTIMELAPSEDISKUTILITIES_H
#define CAMTIMELAPSEDISKUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMTimelapseDiskUtilities : NSObject



+(BOOL)hasPendingWork;
+(BOOL)removeDummyFileForTimelapseUUID:(id)arg0 ;
+(BOOL)reserveDummyFileForTimelapseUUID:(id)arg0 width:(NSInteger)arg1 height:(NSInteger)arg2 useHEVC:(BOOL)arg3 ;
+(BOOL)writeSecondaryStateToDisk:(id)arg0 forTimelapseUUID:(id)arg1 ;
+(BOOL)writeStateToDisk:(id)arg0 createDirectoryIfNeeded:(BOOL)arg1 ;
+(NSInteger)frameIndexFromImageFileName:(id)arg0 ;
+(id)directoryPathForTimelapseUUID:(id)arg0 ;
+(id)dummyFileName;
+(id)dummyFilePathForTimelapseUUID:(id)arg0 ;
+(id)fileNameForImageFrameIndex:(NSInteger)arg0 ;
+(id)fileNameForImageVISIndex:(NSInteger)arg0 ;
+(id)readFrameFilePathsForTimelapseUUID:(id)arg0 ;
+(id)readSecondaryStateForTimelapseUUID:(id)arg0 ;
+(id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg0 ;
+(id)readStateForTimelapseUUID:(id)arg0 mergeSecondaryState:(BOOL)arg1 ;
+(id)secondaryStateFileName;
+(id)secondaryStateFilePathForTimelapseUUID:(id)arg0 ;
+(id)sortedArrayFromFilePathDictionary:(id)arg0 reverse:(BOOL)arg1 ;
+(id)stateFileName;
+(id)stateFilePathForTimelapseUUID:(id)arg0 ;
+(id)timelapseDirectoryPath;
+(id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg0 ;
+(id)timelapseUUIDsOnDisk;
+(id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg0 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg0 forStateReadSuccessfully:(BOOL)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg0 withStopReasons:(NSInteger)arg1 stopTime:(id)arg2 ;


@end


#endif