// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSASSETDOWNLOADOBSERVER_H
#define CLSASSETDOWNLOADOBSERVER_H

@class NSError;

#import <Foundation/Foundation.h>

#import "CLSAbstractAsset.h"

@interface CLSAssetDownloadObserver : NSObject

@property (retain, nonatomic) CLSAbstractAsset *asset; // ivar: _asset
@property (readonly) NSError *downloadError; // ivar: downloadError
@property (readonly) CGFloat downloadProgress; // ivar: downloadProgress
@property (nonatomic, getter=isDownloaded) BOOL downloaded; // ivar: _downloaded
@property (copy, nonatomic) id *onDownloadComplete; // ivar: _onDownloadComplete
@property (copy, nonatomic) id *onDownloadProgress; // ivar: _onDownloadProgress


-(id)initWithAsset:(id)arg0 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif