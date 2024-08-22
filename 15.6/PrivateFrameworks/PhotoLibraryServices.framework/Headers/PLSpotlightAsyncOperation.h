// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSPOTLIGHTASYNCOPERATION_H
#define PLSPOTLIGHTASYNCOPERATION_H

@class NSOperation;



@interface PLSpotlightAsyncOperation : NSOperation

@property NSUInteger operationState; // ivar: _operationState


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)_keyObserverStringForOperationState:(NSUInteger)arg0 ;
-(void)cancel;
-(void)main;
-(void)start;


@end


#endif