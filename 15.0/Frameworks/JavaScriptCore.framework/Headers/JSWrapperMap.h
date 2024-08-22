// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JSWRAPPERMAP_H
#define JSWRAPPERMAP_H


#import <Foundation/Foundation.h>


@interface JSWrapperMap : NSObject {
    RetainPtr<NSMutableDictionary> m_classMap;
    unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> m_cachedJSWrappers;
    RetainPtr<NSMapTable> m_cachedObjCWrappers;
}




-(id)classInfoForClass:(Class)arg0 ;
-(id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg0 ;
-(id)jsWrapperForObject:(id)arg0 inContext:(id)arg1 ;
-(id)objcWrapperForJSValueRef:(struct OpaqueJSValue *)arg0 inContext:(id)arg1 ;


@end


#endif