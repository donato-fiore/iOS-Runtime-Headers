// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPINSTRUCTIONALTEXTLAYOUT_H
#define TSWPINSTRUCTIONALTEXTLAYOUT_H



#import "TSWPLayout.h"
#import "TSWPStorage.h"

@interface TSWPInstructionalTextLayout : TSWPLayout

@property (retain, nonatomic) TSWPStorage *storage;


-(BOOL)isInstructional;
-(id)initWithInfo:(id)arg0 storage:(id)arg1 frame:(struct CGRect )arg2 ;


@end


#endif