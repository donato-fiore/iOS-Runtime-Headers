// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JSMANAGEDVALUE_H
#define JSMANAGEDVALUE_H


#import <Foundation/Foundation.h>

#import "JSValue.h"

@interface JSManagedValue : NSObject {
    Weak<JSC::JSGlobalObject> m_globalObject;
    RefPtr<JSC::JSLock, WTF::RawPtrTraits<JSC::JSLock>, WTF::DefaultRefDerefTraits<JSC::JSLock>> m_lock;
    JSWeakValue m_weakValue;
    RetainPtr<NSMapTable> m_owners;
}


@property (readonly) JSValue *value;


+(id)managedValueWithValue:(id)arg0 ;
+(id)managedValueWithValue:(id)arg0 andOwner:(id)arg1 ;
-(id)init;
-(id)initWithValue:(id)arg0 ;
-(void)dealloc;
-(void)didAddOwner:(id)arg0 ;
-(void)didRemoveOwner:(id)arg0 ;
-(void)disconnectValue;


@end


#endif