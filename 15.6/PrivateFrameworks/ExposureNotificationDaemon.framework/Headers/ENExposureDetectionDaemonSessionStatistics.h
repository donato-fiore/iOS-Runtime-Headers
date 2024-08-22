// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSUREDETECTIONDAEMONSESSIONSTATISTICS_H
#define ENEXPOSUREDETECTIONDAEMONSESSIONSTATISTICS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ENExposureDetectionDaemonSessionStatistics : NSObject <NSCopying>



@property (nonatomic) NSUInteger droppedCachedKeyUpdatesCount; // ivar: _droppedCachedKeyUpdatesCount
@property (nonatomic) NSUInteger droppedKeyCount; // ivar: _droppedKeyCount
@property (nonatomic) NSUInteger fileInvalidKeyCount; // ivar: _fileInvalidKeyCount
@property (nonatomic) NSUInteger fileKeyCount; // ivar: _fileKeyCount
@property (nonatomic) NSUInteger invalidFileSignatureCount; // ivar: _invalidFileSignatureCount
@property (nonatomic) NSUInteger matchedKeyCount; // ivar: _matchedKeyCount
@property (nonatomic) NSUInteger newCachedKeyCount; // ivar: _newCachedKeyCount
@property (nonatomic) NSUInteger processedFileCount; // ivar: _processedFileCount
@property (nonatomic) NSUInteger revokedKeyCount; // ivar: _revokedKeyCount
@property (nonatomic) NSUInteger updatedCachedKeyCount; // ivar: _updatedCachedKeyCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif