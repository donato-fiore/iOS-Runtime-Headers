// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNBLOCKOBSERVABLE_H
#define _CNBLOCKOBSERVABLE_H



#import "CNObservable.h"

@interface _CNBlockObservable : CNObservable {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(id)subscribe:(id)arg0 ;


@end


#endif