// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXAUDIOASSETSINGLEITEMFETCHRESULT_H
#define _PXAUDIOASSETSINGLEITEMFETCHRESULT_H

@class NSString;
@protocol PXAudioAssetFetchResult, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface _PXAudioAssetSingleItemFetchResult : NSObject <PXAudioAssetFetchResult>

 {
    id<PXAudioAsset> *_asset;
}


@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *lastObject;
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif