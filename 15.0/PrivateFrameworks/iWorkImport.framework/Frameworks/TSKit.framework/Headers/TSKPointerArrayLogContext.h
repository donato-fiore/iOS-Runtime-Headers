// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKPOINTERARRAYLOGCONTEXT_H
#define TSKPOINTERARRAYLOGCONTEXT_H

@class NSPointerArray;


#import "TSKCustomLogContext.h"

@interface TSKPointerArrayLogContext : TSKCustomLogContext {
    NSPointerArray *_pointerArray;
}




+(id)logContextWithPointerArray:(id)arg0 parentLogContext:(id)arg1 ;
-(id)initWithPointerArray:(id)arg0 parentLogContext:(id)arg1 ;
-(id)publicStringComponent;


@end


#endif