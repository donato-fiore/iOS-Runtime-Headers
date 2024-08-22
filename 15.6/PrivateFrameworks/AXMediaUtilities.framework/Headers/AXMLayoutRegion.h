// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMLAYOUTREGION_H
#define AXMLAYOUTREGION_H

@class NSMutableArray;


#import "AXMLayoutItem.h"

@interface AXMLayoutRegion : AXMLayoutItem {
    NSMutableArray *_lines;
}




+(id)region:(id)arg0 ;
-(id)firstLine;
-(id)lines;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;
-(void)addLine:(id)arg0 ;


@end


#endif