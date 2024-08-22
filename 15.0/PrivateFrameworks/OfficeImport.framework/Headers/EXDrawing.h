// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXDRAWING_H
#define EXDRAWING_H


#import <Foundation/Foundation.h>


@interface EXDrawing : NSObject



+(?)readAbsoluteAnchorNodestate;
+(?)readAnchorMarkerFromNodestate;
+(?)readAnchorNodestate;
+(?)readDrawableNode:(?)arg0 anchorstate;
+(?)readOneCellAnchorNodestate;
+(?)readTwoCellAnchorNodestate;
+(void)initialize;
+(void)readFromPart:(id)arg0 state:(id)arg1 ;


@end


#endif