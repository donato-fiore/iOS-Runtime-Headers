// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPLATFORM_H
#define CPLPLATFORM_H

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPLPlatform : NSObject {
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
}


@property (copy, nonatomic) NSString *suffix; // ivar: _suffix


+(id)currentPlatform;
+(id)defaultPlatform;
+(void)setDefaultPlatform:(id)arg0 ;
+(void)setProxyImplementationForPlatform:(id)arg0 ;
-(Class)implementationClassForAbstractClass:(Class)arg0 ;
-(id)description;
-(id)init;
-(id)newPlatformImplementationForObject:(id)arg0 ;
-(void)setPlatformImplementation:(Class)arg0 forClass:(Class)arg1 ;


@end


#endif