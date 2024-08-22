// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXDETAILSPLAYBACKRECORD_H
#define _PXDETAILSPLAYBACKRECORD_H

@protocol _PXDetailsAutoplayTile;


#import "PXGridInlinePlaybackRecord.h"

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord

@property (readonly, nonatomic) NSObject<_PXDetailsAutoplayTile> *geometryReference;
@property (nonatomic) PXTileIdentifier tileIdentifier; // ivar: _tileIdentifier


-(NSInteger)desiredPlayState;
-(void)setDesiredPlayState:(NSInteger)arg0 ;


@end


#endif