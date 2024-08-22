// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPFRAMEWORKOVERRIDESITERATOR_H
#define FPFRAMEWORKOVERRIDESITERATOR_H

@class NSProxy, NSArray, NSInvocation;



@interface FPFrameworkOverridesIterator : NSProxy {
    NSArray *_overrides;
    id *_noSuitableModuleFoundHandler;
    NSUInteger _currentIndex;
    NSInvocation *_invocation;
}




+(id)allOverrides;
+(id)newIteratorWithNotFoundHandler:(id)arg0 ;
+(id)overrideDirectoryURL;
+(void)addOverride:(id)arg0 ;
+(void)removeOverride:(id)arg0 ;
-(id)initWithOverrides:(id)arg0 noSuitableModuleFoundHandler:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)callNextOverrides;
-(void)finish;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif