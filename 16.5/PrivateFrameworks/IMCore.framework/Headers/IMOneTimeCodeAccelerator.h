// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMONETIMECODEACCELERATOR_H
#define IMONETIMECODEACCELERATOR_H

@class IMDaemonController<IMDaemonProtocol>;

#import <Foundation/Foundation.h>


@interface IMOneTimeCodeAccelerator : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon; // ivar: _daemon
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection; // ivar: _requestedOneTimeCodeStatusForConnection
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(id)initWithBlockForUpdates:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 andBlock:(id)arg1 ;
-(void)_incomingCodeUpdateFromDaemon:(id)arg0 ;
-(void)consumeCodeWithGuid:(id)arg0 ;
-(void)dealloc;
-(void)setUpConnectionToDaemaon;


@end


#endif