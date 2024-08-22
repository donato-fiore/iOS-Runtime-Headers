// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDONETIMECODEMANAGER_H
#define IMDONETIMECODEMANAGER_H

@class NSTimer, IMOneTimeCodeUtilities, NSArray;
@protocol IMDaemonListenerProtocol;

#import <Foundation/Foundation.h>


@interface IMDOneTimeCodeManager : NSObject

@property (retain, nonatomic) NSObject<IMDaemonListenerProtocol> *broadcaster; // ivar: _broadcaster
@property (retain, nonatomic) NSObject<IMDaemonListenerProtocol> *broadcasterOverride; // ivar: _broadcasterOverride
@property (retain, nonatomic) NSTimer *codeInvalidationTimer; // ivar: _codeInvalidationTimer
@property (retain, nonatomic) IMOneTimeCodeUtilities *otcUtilities; // ivar: _otcUtilities
@property (retain, nonatomic) NSArray *validCodes; // ivar: _validCodes


+(id)sharedInstance;
-(id)init;
-(id)initWithBroadcaster:(id)arg0 otcUtilities:(id)arg1 ;
-(void)_setNewCodeAndPrepareInvalidationTimer:(id)arg0 ;
-(void)broadcastCodeStatusToClients;
-(void)consumeCodeWithGuid:(id)arg0 ;
-(void)dealloc;
-(void)startTrackingCode:(id)arg0 ;


@end


#endif