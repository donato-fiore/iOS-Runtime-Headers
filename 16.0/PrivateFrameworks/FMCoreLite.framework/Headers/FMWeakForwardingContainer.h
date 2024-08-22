// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMWEAKFORWARDINGCONTAINER_H
#define FMWEAKFORWARDINGCONTAINER_H


#import <Foundation/Foundation.h>


@interface FMWeakForwardingContainer : NSObject

@property (readonly, weak, nonatomic) NSObject *target; // ivar: _target


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 ;


@end


#endif