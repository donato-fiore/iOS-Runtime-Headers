// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERACLIPDOWNLOADASSETDATATASK_H
#define HMCAMERACLIPDOWNLOADASSETDATATASK_H

@class NSMutableURLRequest;
@protocol HMCameraClipDownloadAssetDataTaskHandling;

#import <Foundation/Foundation.h>


@interface HMCameraClipDownloadAssetDataTask : NSObject

@property (readonly) NSObject<HMCameraClipDownloadAssetDataTaskHandling> *handler; // ivar: _handler
@property (readonly) NSMutableURLRequest *urlRequest; // ivar: _urlRequest


-(id)downloadDataForByteRange:(struct _NSRange )arg0 ;
-(id)initWithURL:(id)arg0 httpHeaderFields:(id)arg1 ;
-(id)initWithURL:(id)arg0 httpHeaderFields:(id)arg1 handler:(id)arg2 ;


@end


#endif