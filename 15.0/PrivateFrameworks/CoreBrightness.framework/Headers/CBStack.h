// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBSTACK_H
#define CBSTACK_H

@class NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBStack : NSObject {
    NSObject<OS_os_log> *_logHandle;
}


@property NSUInteger length; // ivar: _length
@property (readonly, nonatomic) id *objectToPop; // ivar: _objectToPop
@property (readonly, nonatomic) NSMutableArray *stack; // ivar: _stack


-(id)init;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)popObj;
-(void)clear;
-(void)dealloc;
-(void)printStack;
-(void)pushObj:(id)arg0 ;


@end


#endif