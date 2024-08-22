// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBURSTTHUMBNAILCLUSTER_H
#define CIBURSTTHUMBNAILCLUSTER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CIBurstYUVImage.h"

@interface CIBurstThumbnailCluster : NSObject

@property NSMutableArray *burstImages; // ivar: burstImages
@property id *completionBlock; // ivar: completionBlock
@property *__IOSurface fullsizeJpegData; // ivar: _fullsizeJpegData
@property CIBurstYUVImage *image; // ivar: image
@property NSMutableDictionary *imageProps; // ivar: imageProps


-(float)computeMergeCost:(id)arg0 ;
-(id)init;
-(id)initWithImageData:(id)arg0 dict:(id)arg1 identifier:(id)arg2 imageProps:(id)arg3 completionBlock:(id)arg4 ;
-(void)addItemsFromCluster:(id)arg0 ;
-(void)dealloc;
-(void)releaseImage;


@end


#endif