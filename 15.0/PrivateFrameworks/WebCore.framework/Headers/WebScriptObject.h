// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBSCRIPTOBJECT_H
#define WEBSCRIPTOBJECT_H


#import <Foundation/Foundation.h>

#import "WebScriptObjectPrivate.h"

@interface WebScriptObject : NSObject {
    WebScriptObjectPrivate *_private;
}




+(BOOL)throwException:(id)arg0 ;
+(id)_convertValueToObjcValue:(struct JSValue )arg0 originRootObject:(*void)arg1 rootObject:(*void)arg2 ;
+(id)scriptObjectForJSObject:(struct OpaqueJSValue *)arg0 originRootObject:(*void)arg1 rootObject:(*void)arg2 ;
+(void)initialize;
-(*void)_imp;
-(*void)_originRootObject;
-(*void)_rootObject;
-(BOOL)_hasImp;
-(BOOL)_isSafeScript;
-(BOOL)hasWebScriptKey:(id)arg0 ;
-(id)JSValue;
-(id)_initWithJSObject:(*void)arg0 originRootObject:(*void)arg1 rootObject:(*void)arg2 ;
-(id)callWebScriptMethod:(id)arg0 withArguments:(id)arg1 ;
-(id)evaluateWebScript:(id)arg0 ;
-(id)objectAtIndex:(unsigned int)arg0 ;
-(id)stringRepresentation;
-(id)valueForKey:(id)arg0 ;
-(id)webScriptValueAtIndex:(unsigned int)arg0 ;
-(struct OpaqueJSContext *)_globalContextRef;
-(struct OpaqueJSValue *)JSObject;
-(void)_setImp:(*void)arg0 originRootObject:(*void)arg1 rootObject:(*void)arg2 ;
-(void)_setOriginRootObject:(*void)arg0 andRootObject:(*void)arg1 ;
-(void)dealloc;
-(void)release;
-(void)removeWebScriptKey:(id)arg0 ;
-(void)setException:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setWebScriptValueAtIndex:(unsigned int)arg0 value:(id)arg1 ;


@end


#endif