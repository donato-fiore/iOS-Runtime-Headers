// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYRECIPEENUMERATOR_H
#define _PXSTORYRECIPEENUMERATOR_H

@class PHPhotoLibrary, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PXStoryRecipeEnumerator : NSObject {
    NSUInteger _batchSize;
    PHPhotoLibrary *_photoLibrary;
    NSString *_scheme;
    NSMutableDictionary *_identifierMap;
}


@property (copy, nonatomic) id *block; // ivar: _block


-(BOOL)didEnumerateRecipeDisplayAsset:(id)arg0 error:(*id)arg1 ;
-(id)initWithBatchSize:(NSUInteger)arg0 photoLibrary:(id)arg1 scheme:(id)arg2 block:(id)arg3 ;
-(void)_flush;
-(void)didFinishEnumeratingRecipeDisplayAssets;


@end


#endif