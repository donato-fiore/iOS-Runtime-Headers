// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCLIPPABLEIMAGESTORE_H
#define AVTCLIPPABLEIMAGESTORE_H



#import "AVTImageStore.h"

@interface AVTClippableImageStore : AVTImageStore



-(BOOL)saveImage:(id)arg0 forItem:(id)arg1 scope:(id)arg2 clippingRect:(struct CGRect )arg3 error:(*id)arg4 ;
-(struct CGRect )resourceClippingRectForItem:(id)arg0 scope:(id)arg1 ;


@end


#endif