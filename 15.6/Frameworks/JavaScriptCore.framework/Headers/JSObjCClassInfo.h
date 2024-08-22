// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JSOBJCCLASSINFO_H
#define JSOBJCCLASSINFO_H


#import <Foundation/Foundation.h>


@interface JSObjCClassInfo : NSObject {
    Class m_class;
    BOOL m_block;
    NakedPtr<OpaqueJSClass> m_classRef;
    Weak<JSC::JSObject> m_prototype;
    Weak<JSC::JSObject> m_constructor;
    Weak<JSC::Structure> m_structure;
}




-(*void)constructorInContext:(id)arg0 ;
-(*void)prototypeInContext:(id)arg0 ;
-(*void)structureInContext:(id)arg0 ;
-(*void)wrapperForObject:(id)arg0 inContext:(id)arg1 ;
-(id)initForClass:(Class)arg0 ;
-(struct pair<JSC::JSObject *, JSC::JSObject *> )allocateConstructorAndPrototypeInContext:(id)arg0 ;
-(void)dealloc;


@end


#endif