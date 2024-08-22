// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOPICKERSCALEDFILESIZEESTIMATOR_H
#define PUPHOTOPICKERSCALEDFILESIZEESTIMATOR_H

@class PHAsset;

#import <Foundation/Foundation.h>


@interface PUPhotoPickerScaledFileSizeEstimator : NSObject {
    *CMPhotoDecompressionContainer _figContainer;
}


@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset


+(BOOL)isAssetResizable:(id)arg0 ;
-(BOOL)wouldResizeAssetUsingResizeDescriptor:(id)arg0 ;
-(NSUInteger)_estimatedSizeForResizeDescriptor:(id)arg0 ;
-(NSUInteger)estimatedSizeForResizeDescriptor:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(struct CGSize )_targetSizeForResizeDescriptor:(id)arg0 ;
-(struct CMPhotoDecompressionContainer *)_figContainer;
-(void)dealloc;


@end


#endif