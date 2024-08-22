// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMPMEDIAENTITYIMAGELOADOPERATION_H
#define VUIMPMEDIAENTITYIMAGELOADOPERATION_H



#import "VUIImageLoadParamsOperation.h"

@interface VUIMPMediaEntityImageLoadOperation : VUIImageLoadParamsOperation



-(id)_MPMediaEntityImageLoadParams;
-(id)initWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 ;
-(id)initWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(void)_finishWithImage:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif