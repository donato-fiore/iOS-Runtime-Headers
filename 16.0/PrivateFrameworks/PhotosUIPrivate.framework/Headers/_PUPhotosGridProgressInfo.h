// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PUPHOTOSGRIDPROGRESSINFO_H
#define _PUPHOTOSGRIDPROGRESSINFO_H

@class PHAsset, NSIndexPath, PHAssetCollection, NSString;

#import <Foundation/Foundation.h>


@interface _PUPhotosGridProgressInfo : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSIndexPath *cachedIndexPath; // ivar: _cachedIndexPath
@property (retain, nonatomic) PHAssetCollection *collection; // ivar: _collection
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat progress; // ivar: _progress




@end


#endif