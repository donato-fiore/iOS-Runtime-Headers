// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXAUDIOASSETARRAYFETCHRESULT_H
#define _PXAUDIOASSETARRAYFETCHRESULT_H

@class NSArray, NSString;
@protocol PXAudioAssetFetchResult, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface _PXAudioAssetArrayFetchResult : NSObject <PXAudioAssetFetchResult>

 {
    NSArray *_assets;
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
-(id)initWithArray:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif