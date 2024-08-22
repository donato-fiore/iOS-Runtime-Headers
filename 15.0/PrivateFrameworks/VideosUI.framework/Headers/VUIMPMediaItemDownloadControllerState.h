// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMPMEDIAITEMDOWNLOADCONTROLLERSTATE_H
#define VUIMPMEDIAITEMDOWNLOADCONTROLLERSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMPMediaItemDownloadControllerState : NSObject <NSCopying>



@property (nonatomic) NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property (nonatomic) NSUInteger bytesToDownload; // ivar: _bytesToDownload
@property (nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress; // ivar: _downloadInProgress
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (nonatomic) BOOL downloadSucceeded; // ivar: _downloadSucceeded
@property (nonatomic) NSUInteger status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif