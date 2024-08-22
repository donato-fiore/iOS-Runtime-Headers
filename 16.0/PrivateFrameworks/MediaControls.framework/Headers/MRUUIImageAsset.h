// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUUIIMAGEASSET_H
#define MRUUIIMAGEASSET_H

@class UIImage;
@protocol MRUUIImageRepresentableAsset;


#import "MRUAsset.h"

@interface MRUUIImageAsset : MRUAsset <MRUUIImageRepresentableAsset>



@property (readonly, nonatomic) UIImage *image; // ivar: _image


+(id)image:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;


@end


#endif