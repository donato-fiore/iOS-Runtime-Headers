// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPROXY_H
#define NSPROXY_H

@class NSDictionaryOfVariableBindings;
@protocol NSObject;


#import "NSString.h"

@interface NSProxy : NSDictionaryOfVariableBindings <NSObject>

 {
    Class isa;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(*unk)instanceMethodForSelector:(SEL)arg0 ;
+(*unk)methodForSelector:(SEL)arg0 ;
+(BOOL)_isDeallocating;
+(BOOL)_tryRetain;
+(BOOL)allowsWeakReference;
+(BOOL)conformsToProtocol:(id)arg0 ;
+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)isAncestorOfObject:(id)arg0 ;
+(BOOL)isEqual:(id)arg0 ;
+(BOOL)isFault;
+(BOOL)isKindOfClass:(Class)arg0 ;
+(BOOL)isMemberOfClass:(Class)arg0 ;
+(BOOL)isProxy;
+(BOOL)isSubclassOfClass:(Class)arg0 ;
+(BOOL)respondsToSelector:(SEL)arg0 ;
+(BOOL)retainWeakReference;
+(Class)class;
+(NSUInteger)retainCount;
+(id)_copyDescription;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)autorelease;
+(id)copy;
+(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)forwardingTargetForSelector:(SEL)arg0 ;
+(id)init;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)methodSignatureForSelector:(SEL)arg0 ;
+(id)mutableCopy;
+(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
+(id)performSelector:(SEL)arg0 ;
+(id)performSelector:(SEL)arg0 withObject:(id)arg1 ;
+(id)performSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
+(id)retain;
+(id)self;
+(struct _NSZone *)zone;
+(void)dealloc;
+(void)doesNotRecognizeSelector:(SEL)arg0 ;
+(void)finalize;
+(void)forwardInvocation:(id)arg0 ;
+(void)initialize;
+(void)release;
-(BOOL)_allowsDirectEncoding;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)allowsWeakReference;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFault;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)isMemberOfClass:(Class)arg0 ;
-(BOOL)isNSArray__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSData__;
-(BOOL)isNSDate__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSNumber__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSString__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
-(BOOL)isProxy;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)retainWeakReference;
-(Class)class;
-(NSUInteger)retainCount;
-(id)_copyDescription;
-(id)autorelease;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)performSelector:(SEL)arg0 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(id)retain;
-(id)self;
-(struct _NSZone *)zone;
-(void)dealloc;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;
-(void)finalize;
-(void)forwardInvocation:(id)arg0 ;
-(void)release;


@end


#endif