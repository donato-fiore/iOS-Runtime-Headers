// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSBLOCKTRANSACTION_H
#define BSBLOCKTRANSACTION_H

@class NSString;


#import "BSTransaction.h"

@interface BSBlockTransaction : BSTransaction {
    id *_block;
}


@property (copy, nonatomic) NSString *debugName; // ivar: _debugName


-(BOOL)_canBeInterrupted;
-(id)_descriptionProem;
-(id)_graphNodeDebugName;
-(id)initWithBlock:(id)arg0 ;
-(void)_begin;


@end


#endif