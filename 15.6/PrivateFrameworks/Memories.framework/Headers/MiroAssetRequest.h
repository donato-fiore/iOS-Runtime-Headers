// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROASSETREQUEST_H
#define MIROASSETREQUEST_H

@class PHAsset, PHAssetResource;

#import <Foundation/Foundation.h>


@interface MiroAssetRequest : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) int requestID; // ivar: _requestID
@property (retain, nonatomic) PHAssetResource *resource; // ivar: _resource
@property (nonatomic) CGFloat sizeFactor; // ivar: _sizeFactor


-(id)description;


@end


#endif