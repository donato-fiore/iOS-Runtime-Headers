// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSASSETUPLOADOBSERVER_H
#define CLSASSETUPLOADOBSERVER_H

@class NSError;

#import <Foundation/Foundation.h>

#import "CLSAsset.h"

@interface CLSAssetUploadObserver : NSObject

@property (retain, nonatomic) CLSAsset *asset; // ivar: _asset
@property (copy, nonatomic) id *onUploadComplete; // ivar: _onUploadComplete
@property (copy, nonatomic) id *onUploadProgress; // ivar: _onUploadProgress
@property (readonly) NSError *uploadError; // ivar: uploadError
@property (readonly) CGFloat uploadProgress; // ivar: uploadProgress
@property (nonatomic, getter=isUploaded) BOOL uploaded; // ivar: _uploaded


-(id)initWithAsset:(id)arg0 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif