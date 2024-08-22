// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFACETILEIMAGECOMBINER_H
#define PXFACETILEIMAGECOMBINER_H


#import <Foundation/Foundation.h>


@interface PXFaceTileImageCombiner : NSObject {
    NSUInteger _currentGeneration;
}




+(id)_generateCombinedImageFromImages:(id)arg0 context:(id)arg1 ;
+(id)placeholderImageForNumberOfItems:(NSUInteger)arg0 context:(id)arg1 ;
+(void)initialize;
-(void)_returnCombinedImage:(id)arg0 generation:(NSUInteger)arg1 resultHandler:(id)arg2 ;
-(void)requestCombinedImageForItems:(id)arg0 context:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif