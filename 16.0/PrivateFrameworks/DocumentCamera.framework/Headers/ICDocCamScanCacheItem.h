// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMSCANCACHEITEM_H
#define ICDOCCAMSCANCACHEITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ICDocCamImageCache.h"

@interface ICDocCamScanCacheItem : NSObject

@property (retain, nonatomic) NSArray *docInfos; // ivar: _docInfos
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache


-(id)docInfoForScanDataDelegate:(id)arg0 ;
-(id)imageForScanDataDelegateIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithImageCache:(id)arg0 docInfos:(id)arg1 ;
-(void)deleteCacheImages;
-(void)doneBuildingCache;


@end


#endif