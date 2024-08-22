// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2CANCELABLE_H
#define HAP2CANCELABLE_H

@class NSString;
@protocol HAP2Cancelable;


#import "HAP2LoggingObject.h"

@interface HAP2Cancelable : HAP2LoggingObject <HAP2Cancelable>

 {
    uint8_t _called;
}


@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cancelableWithBlock:(id)arg0 ;
+(id)ignore;
+(id)new;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;


@end


#endif