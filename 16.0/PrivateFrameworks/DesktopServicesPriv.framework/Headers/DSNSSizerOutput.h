// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSNSSIZEROUTPUT_H
#define DSNSSIZEROUTPUT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DSNSSizerOutput : NSObject

@property (nonatomic) NSInteger conflictPhysicalDelta; // ivar: _conflictPhysicalDelta
@property (nonatomic) unsigned int conflicts; // ivar: _conflicts
@property (retain, nonatomic) NSString *destinationPath; // ivar: _destinationPath
@property (nonatomic) NSInteger fsItemCount; // ivar: _fsItemCount
@property (nonatomic) NSInteger logicalBytesTotal; // ivar: _logicalBytesTotal
@property (nonatomic) NSUInteger maxFileSize; // ivar: _maxFileSize
@property (nonatomic) NSInteger mergeDestinationItemsNotInSourceCount; // ivar: _mergeDestinationItemsNotInSourceCount
@property (nonatomic) NSInteger mergeDestinationNewerConflictsBytes; // ivar: _mergeDestinationNewerConflictsBytes
@property (nonatomic) NSInteger mergeDestinationNewerConflictsCount; // ivar: _mergeDestinationNewerConflictsCount
@property (nonatomic) NSInteger mergeDiffMetaDataFilesCount; // ivar: _mergeDiffMetaDataFilesCount
@property (nonatomic) NSInteger mergeMatchedFilesBytes; // ivar: _mergeMatchedFilesBytes
@property (nonatomic) NSInteger mergeMatchedFilesCount; // ivar: _mergeMatchedFilesCount
@property (nonatomic) NSInteger mergePhysicalDelta; // ivar: _mergePhysicalDelta
@property (nonatomic) NSInteger mergeSourceItemsNotInDestinationCount; // ivar: _mergeSourceItemsNotInDestinationCount
@property (nonatomic) NSInteger mergeSourceNewerConflictsCount; // ivar: _mergeSourceNewerConflictsCount
@property (nonatomic) NSInteger physicalBytesTotal; // ivar: _physicalBytesTotal
@property (retain, nonatomic) NSString *sourcePath; // ivar: _sourcePath
@property (nonatomic) NSInteger userVisibleItemCount; // ivar: _userVisibleItemCount


-(id)initWithSizerOutput:(struct TSizerOutput )arg0 ;
-(id)initWithSpaceNeeds:(struct DestinationSpaceNeeds )arg0 ;


@end


#endif