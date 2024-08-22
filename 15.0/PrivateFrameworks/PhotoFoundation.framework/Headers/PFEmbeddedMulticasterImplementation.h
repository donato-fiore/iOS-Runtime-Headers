// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFEMBEDDEDMULTICASTERIMPLEMENTATION_H
#define PFEMBEDDEDMULTICASTERIMPLEMENTATION_H


#import <Foundation/Foundation.h>


@interface PFEmbeddedMulticasterImplementation : NSObject



-(BOOL)addReceiver:(id)arg0 ;
-(BOOL)addWeakReceiver:(id)arg0 ;
-(void)distributeSelector:(SEL)arg0 distributionBlock:(id)arg1 ;
-(void)removeReceiver:(id)arg0 ;


@end


#endif