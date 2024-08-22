// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSWEAKMAP_H
#define IKJSWEAKMAP_H

@class JSManagedValue;


#import "IKJSObject.h"

@interface IKJSWeakMap : IKJSObject

@property (readonly, nonatomic) JSManagedValue *managedWeakMap; // ivar: _managedWeakMap


-(id)_jsWeakMap;
-(id)initWithAppContext:(id)arg0 ;
-(id)valueForWeakKey:(id)arg0 ;
-(struct OpaqueJSValue *)valueRefForWeakKeyRef:(struct OpaqueJSValue *)arg0 ;
-(void)setValue:(id)arg0 forWeakKey:(id)arg1 ;


@end


#endif