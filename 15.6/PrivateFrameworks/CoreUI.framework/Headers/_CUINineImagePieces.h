// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUININEIMAGEPIECES_H
#define _CUININEIMAGEPIECES_H


#import <Foundation/Foundation.h>

#import "CUIImage.h"

@interface _CUINineImagePieces : NSObject {
    CUIImage *_center;
    CUIImage *_topLeft;
    CUIImage *_top;
    CUIImage *_topRight;
    CUIImage *_right;
    CUIImage *_bottomRight;
    CUIImage *_bottom;
    CUIImage *_bottomLeft;
    CUIImage *_left;
    BOOL _tileCenterAndEdges;
}




-(BOOL)tileCenterAndEdges;
-(id)bottom;
-(id)bottomLeft;
-(id)bottomRight;
-(id)center;
-(id)initWithCenter:(id)arg0 topLeft:(id)arg1 top:(id)arg2 topRight:(id)arg3 right:(id)arg4 bottomRight:(id)arg5 bottom:(id)arg6 bottomLeft:(id)arg7 left:(id)arg8 tileCenterAndEdges:(BOOL)arg9 ;
-(id)left;
-(id)right;
-(id)top;
-(id)topLeft;
-(id)topRight;
-(void)dealloc;


@end


#endif