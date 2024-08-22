// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKEEXPORTCACHE_H
#define TSTSTROKEEXPORTCACHE_H

@class TSDStroke;

#import <Foundation/Foundation.h>

#import "TSTStrokeLayerMergedStack.h"

@interface TSTStrokeExportCache : NSObject

@property (retain, nonatomic) TSTStrokeLayerMergedStack *mergedStrokes; // ivar: _mergedStrokes
@property (nonatomic) TSTSimpleRange range; // ivar: _range
@property (retain, nonatomic) TSDStroke *stroke; // ivar: _stroke


-(id)initWithMergedStack:(id)arg0 ;
-(id)strokeAtIndex:(unsigned int)arg0 ;


@end


#endif