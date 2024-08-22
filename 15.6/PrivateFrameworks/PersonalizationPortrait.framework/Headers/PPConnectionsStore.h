// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONNECTIONSSTORE_H
#define PPCONNECTIONSSTORE_H

@class NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>

#import "PPClientFeedbackHelper.h"

@interface PPConnectionsStore : NSObject <PPFeedbackAccepting, PPClientStore>

 {
    PPClientFeedbackHelper *_clientFeedbackHelper;
}


@property (retain, nonatomic) NSString *clientIdentifier;


-(BOOL)iterRecentLocationDonationsSinceDate:(id)arg0 client:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)iterRecentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 client:(id)arg3 error:(*id)arg4 block:(id)arg5 ;
-(BOOL)iterRecentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 explanationSet:(id)arg3 client:(id)arg4 error:(*id)arg5 block:(id)arg6 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif