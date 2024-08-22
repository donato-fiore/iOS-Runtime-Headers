// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNBLOCKTASK_H
#define _CNBLOCKTASK_H



#import "CNTask.h"

@interface _CNBlockTask : CNTask {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 block:(id)arg1 ;
-(id)run:(*id)arg0 ;


@end


#endif