// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATELEPHONYMANAGER_H
#define SATELEPHONYMANAGER_H

@class TUHandle, NSString;
@protocol SATelephonyDelegateProtocol;

#import <Foundation/Foundation.h>


@interface SATelephonyManager : NSObject

@property (nonatomic) BOOL callFailed; // ivar: _callFailed
@property (retain, nonatomic) TUHandle *callHandle; // ivar: _callHandle
@property (nonatomic) BOOL callInProgress; // ivar: _callInProgress
@property (retain, nonatomic) NSString *callUUID; // ivar: _callUUID
@property (weak, nonatomic) NSObject<SATelephonyDelegateProtocol> *delegate; // ivar: _delegate


-(BOOL)_currentCallEqualsCall:(id)arg0 ;
-(id)init;
-(void)_callStatusChanged:(id)arg0 ;
-(void)_canPlaceNewCall:(id)arg0 ;
-(void)_currentCallEnded;
-(void)placeVoiceCall:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif