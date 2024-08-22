// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCOMPOSITIONUPDATEREQUEST_H
#define JFXCOMPOSITIONUPDATEREQUEST_H



#import "JFXCompositionPlayerRequest.h"

@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {
    BOOL _readyForDisplayReceived;
    BOOL _refreshCompletedReceived;
}


@property (readonly, nonatomic) BOOL hasCompleted;


-(id)initWithBlock:(id)arg0 ;
-(void)didBegin;
-(void)didCancel;
-(void)didComplete;
-(void)didEnqueue;
-(void)setReadyForDisplayReceived;
-(void)setRefreshCompletedReceived;


@end


#endif