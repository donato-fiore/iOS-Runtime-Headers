// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTMEDIAENTITYIMAGELOADOPERATION_H
#define VUIPLISTMEDIAENTITYIMAGELOADOPERATION_H



#import "VUIImageLoadParamsOperation.h"

@interface VUIPlistMediaEntityImageLoadOperation : VUIImageLoadParamsOperation



-(id)_plistMediaEntityImageLoadParams;
-(id)initWithParams:(id)arg0 ;
-(id)initWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(void)executionDidBegin;


@end


#endif