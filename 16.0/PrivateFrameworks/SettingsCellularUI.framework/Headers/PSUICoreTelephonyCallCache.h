// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICORETELEPHONYCALLCACHE_H
#define PSUICORETELEPHONYCALLCACHE_H

@class CXCallObserver;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonyCallCache : NSObject

@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver


+(id)sharedInstance;
-(BOOL)isActiveCallSubtype:(char *)arg0 ;
-(BOOL)isActiveCallVoLTE;
-(BOOL)isActiveCallVoNR;
-(BOOL)isAnyCallActive;
-(BOOL)isAnyCallActiveForProviderIdentifier:(id)arg0 ;
-(BOOL)isAnyTelephonyCallActive;
-(BOOL)isAnyVOIPCallActive;
-(id)getLogger;
-(id)init;
-(id)initPrivate:(id)arg0 ;
-(id)localizedPhoneNumber:(id)arg0 context:(id)arg1 ;


@end


#endif