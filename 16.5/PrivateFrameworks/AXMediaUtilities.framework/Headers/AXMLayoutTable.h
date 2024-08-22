// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMLAYOUTTABLE_H
#define AXMLAYOUTTABLE_H

@class NSMutableArray;


#import "AXMLayoutItem.h"
#import "AXMLayoutHeader.h"

@interface AXMLayoutTable : AXMLayoutItem {
    AXMLayoutHeader *_header;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
}




+(id)region:(id)arg0 row:(id)arg1 ;
-(id)columns;
-(id)firstColumn;
-(id)firstLine;
-(id)header;
-(id)rows;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;
-(void)addColumn:(id)arg0 ;
-(void)addRow:(id)arg0 ;


@end


#endif