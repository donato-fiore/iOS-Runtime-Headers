// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADJINGLEREQUESTMANAGER_H
#define ADJINGLEREQUESTMANAGER_H

@class ADSingleton, NSMutableDictionary;



@interface ADJingleRequestManager : ADSingleton

@property BOOL jingleRequestInProgress; // ivar: _jingleRequestInProgress
@property (retain, nonatomic) NSMutableDictionary *pendingJingleRequests; // ivar: _pendingJingleRequests


+(id)sharedInstance;
-(BOOL)canMakeJingleRequest;
-(id)init;
-(id)makeSegmentRequest:(id)arg0 forceSegments:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)authenticateUser:(id)arg0 ;
-(void)jingleRequestCompleted:(id)arg0 ;
-(void)startJingleRequest:(id)arg0 ;


@end


#endif