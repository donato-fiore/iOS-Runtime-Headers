// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSIMPLETILEPROVIDER_H
#define TSDSIMPLETILEPROVIDER_H



#import "TSDTileProvider.h"

@interface TSDSimpleTileProvider : TSDTileProvider

@property (nonatomic) SEL action; // ivar: mAction


-(BOOL)canTargetDrawInParallel;
-(BOOL)isTargetOpaque;
-(void)drawTargetInLayer:(id)arg0 context:(struct CGContext *)arg1 ;


@end


#endif