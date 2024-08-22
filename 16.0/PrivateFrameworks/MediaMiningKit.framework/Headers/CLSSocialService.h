// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSOCIALSERVICE_H
#define CLSSOCIALSERVICE_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface CLSSocialService : NSObject {
    NSMutableDictionary *_proxy;
}


@property (readonly) NSUInteger intent; // ivar: _intent
@property (copy) NSURL *proxyURL; // ivar: _proxyURL


+(id)defaultFileName;
+(id)socialService;
-(BOOL)flushProxy;
-(id)init;
-(id)initWithProxyAtURL:(id)arg0 andIntent:(NSUInteger)arg1 ;
-(id)proxiedValueForKey:(id)arg0 ;
-(void)invalidateMemoryCaches;
-(void)setProxiedValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateProxy;


@end


#endif