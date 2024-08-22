// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSSHCHANNEL_H
#define NMSSHCHANNEL_H

@class NSDictionary, NSData;
@protocol NMSSHChannelDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NMSSHSession.h"

@interface NMSSHChannel : NSObject

@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (nonatomic) *_LIBSSH2_CHANNEL channel; // ivar: _channel
@property (weak, nonatomic) NSObject<NMSSHChannelDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *environmentVariables; // ivar: _environmentVariables
@property (retain, nonatomic) NSData *lastResponse; // ivar: _lastResponse
@property (nonatomic) char * ptyTerminalName; // ivar: _ptyTerminalName
@property (nonatomic) NSInteger ptyTerminalType; // ivar: _ptyTerminalType
@property (nonatomic) BOOL requestPty; // ivar: _requestPty
@property (retain, nonatomic) NMSSHSession *session; // ivar: _session
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)downloadFile:(id)arg0 to:(id)arg1 ;
-(BOOL)downloadFile:(id)arg0 to:(id)arg1 progress:(id)arg2 ;
-(BOOL)openChannel:(*id)arg0 ;
-(BOOL)requestSizeWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(BOOL)sendEOF;
-(BOOL)startShell:(*id)arg0 ;
-(BOOL)uploadFile:(id)arg0 to:(id)arg1 ;
-(BOOL)uploadFile:(id)arg0 to:(id)arg1 progress:(id)arg2 ;
-(BOOL)write:(id)arg0 error:(*id)arg1 ;
-(BOOL)write:(id)arg0 error:(*id)arg1 timeout:(id)arg2 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 timeout:(id)arg2 ;
-(id)execute:(id)arg0 error:(*id)arg1 ;
-(id)execute:(id)arg0 error:(*id)arg1 timeout:(id)arg2 ;
-(id)initWithSession:(id)arg0 ;
-(id)readResponseWithError:(*id)arg0 timeout:(id)arg1 userInfo:(id)arg2 ;
-(void)closeChannel;
-(void)closeShell;
-(void)executeCommandAsynchronously:(id)arg0 ;
-(void)waitEOF;


@end


#endif