// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMIDSTATUSCONTROLLER_H
#define IMIDSTATUSCONTROLLER_H

@class NSRecursiveLock, NSMutableSet;

#import <Foundation/Foundation.h>


@interface IMIDStatusController : NSObject

@property (retain, nonatomic) NSRecursiveLock *_servicesLock; // ivar: _servicesLock
@property (retain, nonatomic) NSMutableSet *_servicesRegistered; // ivar: _servicesRegistered


+(id)sharedInstance;
-(NSInteger)__statusForID:(id)arg0 onService:(id)arg1 isCanonicalized:(BOOL)arg2 ;
-(NSInteger)_idStatusForID:(id)arg0 onAccount:(id)arg1 ;
-(NSInteger)_idStatusForID:(id)arg0 onService:(id)arg1 ;
-(NSInteger)_statusForCanonicalizedID:(id)arg0 onService:(id)arg1 ;
-(NSInteger)statusForID:(id)arg0 onService:(id)arg1 ;
-(id)init;
-(void)_processIDStatusResponseForURI:(id)arg0 resultStatus:(NSInteger)arg1 forService:(id)arg2 ;
-(void)_requestStatusForID:(id)arg0 onService:(id)arg1 onAccount:(id)arg2 ;
-(void)requestStatusForID:(id)arg0 onAccount:(id)arg1 ;
-(void)requestStatusForID:(id)arg0 onService:(id)arg1 ;


@end


#endif