// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AKMESSAGEFORWARDER_H
#define _AKMESSAGEFORWARDER_H

@protocol AKAdaptiveServiceInterface;

#import <Foundation/Foundation.h>


@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface>

 {
    id *_weakReceiver;
    id *_strongReceiver;
}




-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithReceiver:(id)arg0 strong:(BOOL)arg1 ;
-(id)initWithStrongReceiver:(id)arg0 ;
-(id)initWithWeakReceiver:(id)arg0 ;
-(void)activate;


@end


#endif