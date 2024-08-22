// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXCONCATENATINGAUDIOASSETFETCHRESULT_H
#define _PXCONCATENATINGAUDIOASSETFETCHRESULT_H

@class NSArray, NSString;
@protocol PXAudioAssetFetchResult, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface _PXConcatenatingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult>

 {
    NSArray *_fetchResults;
    *NSInteger _startIndexes;
    NSInteger _subFetchResultsCount;
    NSInteger _count;
}


@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *lastObject;
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(id)_subFetchResultForIndex:(NSInteger)arg0 localIndex:(*NSInteger)arg1 ;
-(id)initWithFetchResults:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif