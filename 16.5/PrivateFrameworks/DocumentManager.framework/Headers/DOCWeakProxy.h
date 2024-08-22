// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCWEAKPROXY_H
#define DOCWEAKPROXY_H


#import <Foundation/Foundation.h>


@interface DOCWeakProxy : NSObject

@property (weak) NSObject *target; // ivar: _target


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 ;


@end


#endif