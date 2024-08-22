// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSBALANCINGAUTHORITY_H
#define _GDSBALANCINGAUTHORITY_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GDSBalancingAuthority : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)currentBalancingAuthority;
+(id)fetchBalancingAuthorityPolygons;
+(id)loadBalancingAuthorityStatus;
+(id)loadNumberForPreferenceKey:(id)arg0 ;
+(id)loadRegistrations;
+(id)loadStringForPreferenceKey:(id)arg0 ;
+(id)sharedInstance;
+(void)saveBalancingAuthority:(id)arg0 ;
+(void)saveBalancingAuthorityStatus:(id)arg0 ;
+(void)saveRegisteration:(id)arg0 bundlePath:(id)arg1 ;
-(id)init;
-(void)fetchBalancingAuthority;


@end


#endif