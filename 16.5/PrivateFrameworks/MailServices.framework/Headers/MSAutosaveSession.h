// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSAUTOSAVESESSION_H
#define MSAUTOSAVESESSION_H

@class NSString;
@protocol MSDAutosaveProtocol, MSDAutosaveSessionProtocol;

#import <Foundation/Foundation.h>


@interface MSAutosaveSession : NSObject

@property (readonly, copy, nonatomic) NSString *autosaveIdentifier; // ivar: _autosaveIdentifier
@property (retain, nonatomic) NSObject<MSDAutosaveProtocol> *remoteService; // ivar: _remoteService
@property (retain, nonatomic) NSObject<MSDAutosaveSessionProtocol> *remoteSession; // ivar: _remoteSession


+(id)log;
-(id)initWithIdentifier:(id)arg0 remoteSession:(id)arg1 remoteService:(id)arg2 ;
-(void)didReconnectRemoteSession:(id)arg0 remoteService:(id)arg1 ;
-(void)remoteSessionDisconnectedWithError:(id)arg0 ;


@end


#endif