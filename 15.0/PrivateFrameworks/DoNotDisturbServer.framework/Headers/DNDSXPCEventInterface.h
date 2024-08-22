// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSXPCEVENTINTERFACE_H
#define DNDSXPCEVENTINTERFACE_H


#import <Foundation/Foundation.h>


@interface DNDSXPCEventInterface : NSObject



+(id)sharedInstance;
-(void)registerForStream:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)setEvent:(id)arg0 forKey:(id)arg1 onStream:(id)arg2 ;


@end


#endif