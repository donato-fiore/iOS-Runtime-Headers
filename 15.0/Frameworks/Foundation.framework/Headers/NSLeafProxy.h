// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLEAFPROXY_H
#define NSLEAFPROXY_H

@class NSDictionaryOfVariableBindings;
@protocol NSCopying;


#import "NSString.h"
#import "NSDocInfo.h"

@interface NSLeafProxy : NSDictionaryOfVariableBindings <NSCopying>

 {
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    NSInteger refCount;
    id *realObject;
}




+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)forwardInvocation:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isProxy;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initDir:(id)arg0 file:(id)arg1 docInfo:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)reallyDealloc;
-(void)release;


@end


#endif