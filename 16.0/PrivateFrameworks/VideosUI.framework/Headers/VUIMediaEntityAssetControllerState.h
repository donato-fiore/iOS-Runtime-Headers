// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAENTITYASSETCONTROLLERSTATE_H
#define VUIMEDIAENTITYASSETCONTROLLERSTATE_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying>



@property (nonatomic) BOOL allowsCellular; // ivar: _allowsCellular
@property (retain, nonatomic) NSDate *availabilityEndDate; // ivar: _availabilityEndDate
@property (nonatomic) NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property (nonatomic) NSUInteger bytesToDownload; // ivar: _bytesToDownload
@property (retain, nonatomic) NSDate *downloadExpirationDate; // ivar: _downloadExpirationDate
@property (readonly, nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress;
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (nonatomic) BOOL performsKeyFetchOnly; // ivar: _performsKeyFetchOnly
@property (nonatomic) BOOL renewsOfflineKeysAutomatically; // ivar: _renewsOfflineKeysAutomatically
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) BOOL supportsCancellation; // ivar: _supportsCancellation
@property (nonatomic) BOOL supportsPausing; // ivar: _supportsPausing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif