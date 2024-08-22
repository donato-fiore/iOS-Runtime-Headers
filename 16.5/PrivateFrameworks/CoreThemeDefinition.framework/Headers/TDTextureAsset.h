// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDTEXTUREASSET_H
#define TDTEXTUREASSET_H

@class NSSet;


#import "TDAsset.h"

@interface TDTextureAsset : TDAsset

@property (nonatomic) int exifOrientation; // ivar: exifOrientation
@property (retain, nonatomic) NSSet *renditions;


-(id)sourceImageWithDocument:(id)arg0 ;
-(struct CGSize )sourceImageSizeWithDocument:(id)arg0 ;
-(void)_logError:(id)arg0 ;


@end


#endif