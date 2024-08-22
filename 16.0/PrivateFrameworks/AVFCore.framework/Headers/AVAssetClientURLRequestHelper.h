// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETCLIENTURLREQUESTHELPER_H
#define AVASSETCLIENTURLREQUESTHELPER_H


#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAssetResourceLoader.h"

@interface AVAssetClientURLRequestHelper : NSObject {
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToAsset;
    AVWeakReference *_weakReferenceToResourceLoader;
}


@property (readonly, nonatomic) *OpaqueFigAsset figAsset;
@property (copy, nonatomic) id *figAssetProvider; // ivar: _figAssetProvider
@property (weak, nonatomic) AVAssetResourceLoader *resourceLoader;


-(id)URLAsset;
-(id)initWithAsset:(id)arg0 ;
-(void)dealloc;


@end


#endif