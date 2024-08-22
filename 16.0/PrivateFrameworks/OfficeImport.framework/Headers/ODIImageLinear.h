// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODIIMAGELINEAR_H
#define ODIIMAGELINEAR_H

@class NSString;


#import "ODILinear.h"

@interface ODIImageLinear : ODILinear {
    NSString *mImagePresentationName;
}




-(id)initWithImagePresentationName:(id)arg0 state:(id)arg1 ;
-(void)mapPoint:(id)arg0 bounds:(struct CGRect )arg1 ;


@end


#endif