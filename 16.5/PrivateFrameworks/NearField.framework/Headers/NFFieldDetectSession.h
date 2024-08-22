// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFFIELDDETECTSESSION_H
#define NFFIELDDETECTSESSION_H

@class NSString;
@protocol NFFieldDetectSessionCallbacks, NFFieldDetectSessionDelegate;


#import "NFSession.h"

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks>

 {
    id<NFFieldDetectSessionDelegate> *_delegate;
    BOOL _fieldNotificationSent;
}


@property (readonly, copy) NSString *debugDescription;
@property NSObject<NFFieldDetectSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isTimeLimited;
-(void)didDetectField:(BOOL)arg0 ;
-(void)didDetectFieldNotification:(id)arg0 ;
-(void)didEndUnexpectedly;


@end


#endif