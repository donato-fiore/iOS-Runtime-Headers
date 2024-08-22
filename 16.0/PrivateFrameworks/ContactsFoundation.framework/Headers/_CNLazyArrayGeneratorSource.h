// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNLAZYARRAYGENERATORSOURCE_H
#define _CNLAZYARRAYGENERATORSOURCE_H

@protocol _CNLazyArrayOperation;

#import <Foundation/Foundation.h>


@interface _CNLazyArrayGeneratorSource : NSObject <_CNLazyArrayOperation>

 {
    id *_state;
    id *_condition;
    id *_nextState;
    id *_resultFromState;
    BOOL _firstTime;
}




// -(id)initWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3  ;
-(id)nextObject;


@end


#endif