// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXOVERLAYFEEDLAYOUTGENERATOR_H
#define PXOVERLAYFEEDLAYOUTGENERATOR_H



#import "PXCachingLayoutGenerator.h"

@interface PXOverlayFeedLayoutGenerator : PXCachingLayoutGenerator

@property (nonatomic) CGPoint visibleOrigin; // ivar: _visibleOrigin


-(struct ? )_frameForItemAtIndex:(NSInteger)arg0 in:(struct CGRect *)arg1 verticalOffset:(CGFloat)arg2 ;
-(struct CGRect )_frameForItemInColumn:(NSInteger)arg0 columnCount:(NSInteger)arg1 verticalOffset:(CGFloat)arg2 ;
-(void)updateContentSize:(struct CGSize *)arg0 itemRects:(struct CGRect *)arg1 itemKinds:(*NSInteger)arg2 zPositions:(*float)arg3 ;


@end


#endif