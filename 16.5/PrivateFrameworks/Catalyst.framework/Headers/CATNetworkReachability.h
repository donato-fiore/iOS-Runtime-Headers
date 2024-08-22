// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATNETWORKREACHABILITY_H
#define CATNETWORKREACHABILITY_H

@protocol CATNetworkReachabilityDelegate;

#import <Foundation/Foundation.h>

#import "CATAddress.h"

@interface CATNetworkReachability : NSObject {
    *__SCNetworkReachability mReachabilityRef;
}


@property (readonly, nonatomic) CATAddress *address; // ivar: _address
@property (weak, nonatomic) NSObject<CATNetworkReachabilityDelegate> *delegate; // ivar: _delegate
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;


+(BOOL)isReachableForLocalWiFiWithFlags:(unsigned int)arg0 ;
+(BOOL)isReachableForNetworkWithFlags:(unsigned int)arg0 ;
+(id)keyPathsForValuesAffectingReachable;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(id)arg0 ;
-(id)debugDescription;
-(id)initWithAddress:(id)arg0 ;
-(void)configureCallback;
-(void)dealloc;
-(void)reachabilityDidChangeWithFlags:(unsigned int)arg0 ;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;


@end


#endif