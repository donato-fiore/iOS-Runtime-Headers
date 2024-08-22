// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETFETCHRESULTENUMERATOR_H
#define PXDISPLAYASSETFETCHRESULTENUMERATOR_H

@protocol PXDisplayAssetFetchResult;


#import "PXEnumerator.h"

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> *_fetchResult;
    NSInteger _currentIndex;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstObject;
-(id)init;
-(id)initWithDisplayAssetFetchResult:(id)arg0 ;
-(id)nextObject;
-(void)reset;


@end


#endif