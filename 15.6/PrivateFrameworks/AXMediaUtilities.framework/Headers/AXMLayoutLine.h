// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMLAYOUTLINE_H
#define AXMLAYOUTLINE_H

@class NSMutableArray;


#import "AXMLayoutItem.h"

@interface AXMLayoutLine : AXMLayoutItem {
    NSMutableArray *_sequences;
}




+(id)line:(id)arg0 ;
-(id)recognizedTextFeatures;
-(id)sequences;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;
-(void)addSequence:(id)arg0 ;


@end


#endif