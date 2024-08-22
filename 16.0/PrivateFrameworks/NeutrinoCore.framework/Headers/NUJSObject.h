// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUJSOBJECT_H
#define NUJSOBJECT_H



#import "NUJSProxy.h"

@interface NUJSObject : NUJSProxy



+(struct OpaqueJSClass *)jsClass;
-(BOOL)hasProperty:(id)arg0 ;
-(id)JSValueWithContext:(id)arg0 ;
-(id)toObject;
-(id)toString;
-(id)valueForProperty:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(void)enumerateProperties:(id)arg0 ;


@end


#endif