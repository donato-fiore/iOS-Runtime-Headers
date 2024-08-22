// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNWEAKPROXY_H
#define LNWEAKPROXY_H


#import <Foundation/Foundation.h>


@interface LNWeakProxy : NSObject {
    id *_wrapper;
}


@property (readonly, weak, nonatomic) id *value; // ivar: _value


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 wrapper:(id)arg1 ;


@end


#endif