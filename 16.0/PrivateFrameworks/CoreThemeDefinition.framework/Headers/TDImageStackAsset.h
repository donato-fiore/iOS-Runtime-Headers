// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDIMAGESTACKASSET_H
#define TDIMAGESTACKASSET_H

@class NSSet;


#import "TDAsset.h"

@interface TDImageStackAsset : TDAsset

@property (retain, nonatomic) NSSet *renditions;


-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
-(id)imageStackDataWithDocument:(id)arg0 ;


@end


#endif