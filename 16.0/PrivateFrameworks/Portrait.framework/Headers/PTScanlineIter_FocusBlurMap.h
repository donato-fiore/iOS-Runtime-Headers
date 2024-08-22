// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTSCANLINEITER_FOCUSBLURMAP_H
#define PTSCANLINEITER_FOCUSBLURMAP_H

@class NSString;
@protocol PTScanlineIter;

#import <Foundation/Foundation.h>

#import "PTScanlineMask_FocusBlurMap.h"

@interface PTScanlineIter_FocusBlurMap : NSObject <PTScanlineIter>



@property NSUInteger currentTile; // ivar: _currentTile
@property NSUInteger currentTileRow; // ivar: _currentTileRow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) PTScanlineMask_FocusBlurMap *mask; // ivar: _mask
@property (readonly) Class superclass;


-(id)initWithMask:(id)arg0 ;
-(struct _NSRange )nextRangeX;
-(struct _NSRange )nextRangeY;
-(void)_advanceToNextTile;
-(void)_advanceToNextTileRow;
-(void)reset;
-(void)resetX;


@end


#endif