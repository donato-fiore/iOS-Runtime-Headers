// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETRESOURCEREQUESTOPTIONS_H
#define PHASSETRESOURCEREQUESTOPTIONS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHAssetResourceRequestOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) BOOL downloadIsTransient; // ivar: _downloadIsTransient
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) NSNumber *pruneAfterAvailableLowDiskThresholdBytes; // ivar: _pruneAfterAvailableLowDiskThresholdBytes
@property (nonatomic) BOOL pruneAfterAvailableOnLowDisk; // ivar: _pruneAfterAvailableOnLowDisk
@property (nonatomic) BOOL resistentToPrune; // ivar: _resistentToPrune


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif