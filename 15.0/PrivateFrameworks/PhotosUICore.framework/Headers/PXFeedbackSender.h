// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFEEDBACKSENDER_H
#define PXFEEDBACKSENDER_H


#import <Foundation/Foundation.h>


@interface PXFeedbackSender : NSObject {
    NSUInteger _feedbackType;
    BOOL _userLikedResults;
}




-(BOOL)sendFeedbackWithFeedbackEntryUUID:(id)arg0 ;
-(BOOL)sendPendingFeedbackToServer;
-(id)generateFeedbackParamsStringForEntry:(id)arg0 ;
-(void)_incrementAGGDCounterForFeedbackValueKey:(id)arg0 ofEntry:(id)arg1 ;
-(void)_incrementCounterForFeedbackValueKey:(id)arg0 ofEntry:(id)arg1 ;
-(void)_incrementCounterForMixedFeedbackValueKey:(id)arg0 ofEntry:(id)arg1 ;
-(void)_incrementMessageTracerCounterForFeedbackValueKey:(id)arg0 ofEntry:(id)arg1 ;
-(void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)arg0 ofEntry:(id)arg1 ;
-(void)_sendFeedbackEntryToOSService:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)sendFeedback:(id)arg0 forFeedbackType:(NSUInteger)arg1 ;
-(void)sendFeedbackToServer:(id)arg0 ;
-(void)testTalkToServer;


@end


#endif