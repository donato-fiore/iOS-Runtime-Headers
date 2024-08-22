// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2REKEY_H
#define NEIKEV2REKEY_H

@class SWWakingTimer, NSString;
@protocol NSObject, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NEIKEv2Rekey : NSObject <NSObject>

 {
    int _ikeLifetimeMinutes;
    int _childLifetimeMinutes;
    SWWakingTimer *_ikeLifetime;
    SWWakingTimer *_childLifetime;
    NSString *_sessionDescription;
    NSObject<OS_dispatch_source> *_ikeLifetimeDispatchTimer;
    NSObject<OS_dispatch_source> *_childLifetimeDispatchTimer;
    id *_ikeRekeyHandler;
    id *_childRekeyHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif