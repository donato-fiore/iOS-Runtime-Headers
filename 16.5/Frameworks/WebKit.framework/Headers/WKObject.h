// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKOBJECT_H
#define WKOBJECT_H

@class NSProxy, NSString;
@protocol WKObject;



@interface WKObject : NSProxy <WKObject>

 {
    BOOL _hasInitializedTarget;
    RetainPtr<NSObject> _target;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
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
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(id)_web_createTarget;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif