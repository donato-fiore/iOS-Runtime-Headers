// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRTCCSTOREPASSTHROUGH_H
#define SRTCCSTOREPASSTHROUGH_H

@class NSString;
@protocol SRTCCStore;

#import <Foundation/Foundation.h>


@interface SRTCCStorePassThrough : NSObject <SRTCCStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)checkAccessForService:(id)arg0 auditToken:(struct ? )arg1 ;
-(BOOL)isOverriddenForService:(id)arg0 ;
-(BOOL)resetService:(id)arg0 ;
-(BOOL)resetService:(id)arg0 forBundleId:(id)arg1 ;
-(BOOL)setOverride:(BOOL)arg0 forService:(id)arg1 ;
-(BOOL)setValue:(BOOL)arg0 forService:(id)arg1 bundleId:(id)arg2 ;
-(NSInteger)preflightAuthorizationStatusForService:(id)arg0 ;
-(id)bundleIdentifiersDisabledForService:(id)arg0 ;
-(id)bundleIdentifiersForService:(id)arg0 ;
-(id)informationForBundleId:(id)arg0 ;
-(void)requestAccessForService:(id)arg0 completion:(id)arg1 ;


@end


#endif