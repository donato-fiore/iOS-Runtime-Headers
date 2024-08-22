// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTEREOPAIRDAILYCOUNTPROVIDERCONTEXT_H
#define HMDSTEREOPAIRDAILYCOUNTPROVIDERCONTEXT_H

@class NSString;
@protocol HMDStereoPairDailyCountProviderContext;

#import <Foundation/Foundation.h>

#import "HMDHomeMediaSystemHandler.h"
#import "HMDLogEventDailyScheduler.h"

@interface HMDStereoPairDailyCountProviderContext : NSObject <HMDStereoPairDailyCountProviderContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeMediaSystemHandler *mediaSystemController; // ivar: _mediaSystemController
@property (readonly, weak) HMDLogEventDailyScheduler *scheduler;
@property (readonly) Class superclass;


-(id)initWithMediaSystemController:(id)arg0 ;
-(void)registerLogEventDailyProvider:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;


@end


#endif