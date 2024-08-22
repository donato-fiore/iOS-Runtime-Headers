// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATELEPHONYMANAGER_H
#define SATELEPHONYMANAGER_H

@class TUCall;
@protocol OS_dispatch_queue, SATelephonyDelegateProtocol;

#import <Foundation/Foundation.h>


@interface SATelephonyManager : NSObject

@property (retain, nonatomic) TUCall *call; // ivar: _call
@property (nonatomic) BOOL callFailed; // ivar: _callFailed
@property (nonatomic) BOOL callInProgress; // ivar: _callInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callQueue; // ivar: _callQueue
@property (weak, nonatomic) NSObject<SATelephonyDelegateProtocol> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(void)_callStatusChanged:(id)arg0 ;
-(void)_canPlaceNewCall:(id)arg0 ;
-(void)_currentCallEnded;
-(void)handleCallChanged:(id)arg0 force:(BOOL)arg1 ;
-(void)placeVoiceCall:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif