// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDREPTILEPROVIDER_H
#define TSDREPTILEPROVIDER_H



#import "TSDTileProvider.h"

@interface TSDRepTileProvider : TSDTileProvider



-(BOOL)canTargetDrawInParallel;
-(BOOL)isTargetOpaque;
-(id)initWithRep:(id)arg0 ;
-(void)beginDrawingOperation;
-(void)drawTargetInLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)endDrawingOperation;


@end


#endif