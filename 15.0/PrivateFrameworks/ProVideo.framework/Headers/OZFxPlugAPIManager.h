// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZFXPLUGAPIMANAGER_H
#define OZFXPLUGAPIMANAGER_H

@class NSMutableDictionary, NSString;
@protocol PROAPIAccessing;

#import <Foundation/Foundation.h>


@interface OZFxPlugAPIManager : NSObject <PROAPIAccessing>

 {
    NSMutableDictionary *_apis;
    PCRecursiveMutex _mutex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)apiForProtocol:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)registerAPIObject:(id)arg0 forProtocol:(id)arg1 version:(unsigned int)arg2 ;
-(void)unregisterAPIForProtocol:(id)arg0 ;


@end


#endif