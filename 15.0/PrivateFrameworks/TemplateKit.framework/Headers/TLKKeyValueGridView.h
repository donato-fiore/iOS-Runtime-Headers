// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKKEYVALUEGRIDVIEW_H
#define TLKKEYVALUEGRIDVIEW_H

@class NUIContainerGridView, NSMutableArray;



@interface TLKKeyValueGridView : NUIContainerGridView

@property (retain, nonatomic) NSMutableArray *keyLabels; // ivar: _keyLabels
@property (retain, nonatomic) NSMutableArray *valueLabels; // ivar: _valueLabels


-(id)init;
-(void)updateWithTuples:(id)arg0 valueColumnIsTrailing:(BOOL)arg1 truncateKey:(BOOL)arg2 ;


@end


#endif