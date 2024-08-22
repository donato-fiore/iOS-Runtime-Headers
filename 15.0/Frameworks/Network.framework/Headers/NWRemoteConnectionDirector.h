// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWREMOTECONNECTIONDIRECTOR_H
#define NWREMOTECONNECTIONDIRECTOR_H

@class NSMutableArray;
@protocol NWRemoteConnectionDirectorDelegate;

#import <Foundation/Foundation.h>


@interface NWRemoteConnectionDirector : NSObject

@property *nw_protocol defaultOutputHandler; // ivar: _defaultOutputHandler
@property (weak) NSObject<NWRemoteConnectionDirectorDelegate> *delegate; // ivar: _delegate
@property *nw_protocol directorProtocol; // ivar: _directorProtocol
@property (nonatomic) NSUInteger maximumDataChunkSize; // ivar: _maximumDataChunkSize
@property (readonly, nonatomic) *nw_protocol protocol;
@property *nw_hash_table protocolHashTable; // ivar: _protocolHashTable
@property (retain) NSMutableArray *writeRequests; // ivar: _writeRequests


-(?)outputHandlerForFlowID;
-(?)setDefaultOutputProtocolHandler;
-(?)setOutputProtocolHandler:(?)arg0 forFlowIDdataMode;
-(BOOL)receiveRemoteReply:(id)arg0 ;
-(NSUInteger)dataModeForFlowID:(id)arg0 ;
-(id)createCloseConnectionMessageForClientID:(id)arg0 ;
-(id)createOpenConnectionMessageForClientID:(id)arg0 endpoint:(id)arg1 parameters:(id)arg2 ;
-(id)createSendDataMessageForClientID:(id)arg0 data:(id)arg1 receiveWindow:(unsigned int)arg2 ;
-(id)createStartBrowseMessageForClientID:(id)arg0 descriptor:(id)arg1 parameters:(id)arg2 ;
-(id)createStopBrowseMessageForClientID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)receiveData:(id)arg0 forClient:(id)arg1 ;


@end


#endif