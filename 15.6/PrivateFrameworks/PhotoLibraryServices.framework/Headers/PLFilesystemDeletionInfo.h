// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFILESYSTEMDELETIONINFO_H
#define PLFILESYSTEMDELETIONINFO_H

@class NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface PLFilesystemDeletionInfo : NSObject

@property (readonly) NSString *directory; // ivar: _directory
@property (retain) NSArray *fileURLs; // ivar: _fileURLs
@property (readonly) NSString *filename; // ivar: _filename
@property (readonly) NSURL *objectIDURI; // ivar: _objectIDURI
@property (retain) NSString *thumbnailIdentifier; // ivar: _thumbnailIdentifier
@property (readonly) NSUInteger thumbnailIndex; // ivar: _thumbnailIndex
@property (readonly) NSUInteger timestamp; // ivar: _timestamp
@property (readonly) NSString *uuid; // ivar: _uuid


+(id)deletionInfoWithAsset:(id)arg0 ;
-(id)description;
-(id)initWithObjectIDURI:(id)arg0 directory:(id)arg1 filename:(id)arg2 fileURLs:(id)arg3 thumbnailIndex:(NSUInteger)arg4 thumbnailIdentifier:(id)arg5 uuid:(id)arg6 timestamp:(NSUInteger)arg7 ;


@end


#endif