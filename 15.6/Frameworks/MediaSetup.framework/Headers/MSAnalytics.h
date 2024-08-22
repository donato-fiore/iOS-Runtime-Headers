// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSANALYTICS_H
#define MSANALYTICS_H


#import <Foundation/Foundation.h>


@interface MSAnalytics : NSObject



+(void)sendConfigEvent:(id)arg0 ;
+(void)sendPlayIntent:(BOOL)arg0 ;
+(void)sendPrimaryUserUpdatedOn:(id)arg0 ;
+(void)sendRemovalEvent:(id)arg0 ;
+(void)sendServiceEvent:(id)arg0 ;
+(void)sendSetupEvent:(id)arg0 ;
+(void)sendSeviceRequestLapseEvent:(id)arg0 ;
+(void)sendUserRegisteredNumberOfServices:(int)arg0 ;


@end


#endif