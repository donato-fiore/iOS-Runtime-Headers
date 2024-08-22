// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMLAYOUTRECEIPT_H
#define AXMLAYOUTRECEIPT_H

@class NSMutableArray;


#import "AXMLayoutItem.h"

@interface AXMLayoutReceipt : AXMLayoutItem {
    NSMutableArray *_rows;
}




+(id)region:(id)arg0 ;
-(id)firstLine;
-(id)rows;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;
-(void)addRow:(id)arg0 ;


@end


#endif