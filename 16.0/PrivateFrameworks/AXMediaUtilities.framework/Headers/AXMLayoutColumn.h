// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMLAYOUTCOLUMN_H
#define AXMLAYOUTCOLUMN_H

@class NSMutableArray;


#import "AXMLayoutItem.h"

@interface AXMLayoutColumn : AXMLayoutItem {
    NSMutableArray *_cells;
}




+(id)column:(id)arg0 ;
-(id)cells;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;
-(void)addCell:(id)arg0 ;


@end


#endif