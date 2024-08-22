// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCCANCELHANDLER_H
#define RCCANCELHANDLER_H

@class NSString;
@protocol RCOperationCanceling;

#import <Foundation/Foundation.h>


@interface RCCancelHandler : NSObject <RCOperationCanceling>



@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) SEL selector; // ivar: _selector
@property (retain, nonatomic) id *strongTarget; // ivar: _strongTarget
@property (readonly) Class superclass;
@property (weak, nonatomic) id *weakTarget; // ivar: _weakTarget


+(id)cancelHandlerWithBlock:(id)arg0 ;
+(id)cancelHandlerWithStrongTarget:(id)arg0 selector:(SEL)arg1 ;
+(id)cancelHandlerWithWeakTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithStrongTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithWeakTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)cancel;


@end


#endif