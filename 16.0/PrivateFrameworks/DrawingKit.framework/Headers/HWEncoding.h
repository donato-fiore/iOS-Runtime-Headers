// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HWENCODING_H
#define HWENCODING_H


#import <Foundation/Foundation.h>


@interface HWEncoding : NSObject



+(id)decodeHandwritingFromData:(id)arg0 ;
+(id)decodedBrushStrokesWithData:(id)arg0 inCanvasBounds:(struct CGRect )arg1 inStrokesFrame:(struct CGRect )arg2 strokeDataFieldCount:(unsigned int)arg3 count:(NSUInteger)arg4 ;
+(id)encodeBrushStrokesAsData:(id)arg0 inCanvasBounds:(struct CGRect )arg1 inStrokesFrame:(struct CGRect )arg2 ;
+(id)encodeHandwriting:(id)arg0 compress:(BOOL)arg1 ;
+(id)protoDrawingFromDrawing:(id)arg0 compress:(BOOL)arg1 ;
+(id)protoMessageFromHandwriting:(id)arg0 ;
+(void)writeDataToDisk:(id)arg0 withName:(id)arg1 ;


@end


#endif