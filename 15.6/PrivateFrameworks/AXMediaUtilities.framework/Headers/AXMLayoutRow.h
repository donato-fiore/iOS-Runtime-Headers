// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMLAYOUTROW_H
#define AXMLAYOUTROW_H

@class NSMutableArray;


#import "AXMLayoutItem.h"

@interface AXMLayoutRow : AXMLayoutItem {
    NSMutableArray *_cells;
}




+(id)row:(id)arg0 ;
-(id)cells;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;
-(void)addCell:(id)arg0 ;


@end


#endif