// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSWEAKFORWARDINGTARGET_H
#define VSWEAKFORWARDINGTARGET_H


#import <Foundation/Foundation.h>


@interface VSWeakForwardingTarget : NSObject

@property (weak, nonatomic) id *object; // ivar: _object


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;


@end


#endif