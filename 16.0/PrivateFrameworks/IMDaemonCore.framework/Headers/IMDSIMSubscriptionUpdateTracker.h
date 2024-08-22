// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDSIMSUBSCRIPTIONUPDATETRACKER_H
#define IMDSIMSUBSCRIPTIONUPDATETRACKER_H

@class CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientDelegate;

#import <Foundation/Foundation.h>


@interface IMDSIMSubscriptionUpdateTracker : NSObject <CoreTelephonyClientDelegate>



@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedTrackerInstance;
-(id)init;
-(void)activeSubscriptionsDidChange;


@end


#endif