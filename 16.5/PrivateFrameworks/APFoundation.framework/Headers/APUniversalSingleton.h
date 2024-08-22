// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUNIVERSALSINGLETON_H
#define APUNIVERSALSINGLETON_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APUniversalSingleton : NSObject {
    NSDictionary *_singletons;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)isSingletonSet;
+(id)sharedInstance;
+(void)resetSingleton;
-(id)_valueForSingletonKey:(id)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_setValue:(id)arg0 forSingletonKey:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif