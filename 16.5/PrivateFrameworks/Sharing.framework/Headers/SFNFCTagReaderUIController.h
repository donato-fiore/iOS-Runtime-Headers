// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFNFCTAGREADERUICONTROLLER_H
#define SFNFCTAGREADERUICONTROLLER_H

@class CUXPCAgent, NSXPCConnection, CUXPCAgentConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFNFCTagReaderUIController : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSInteger _nfcTagScanCount;
    BOOL _nfcTagScanPending;
    CUXPCAgent *_xpcAgent;
    NSXPCConnection *_xpcCnx;
    CUXPCAgentConnection *_xpcUICnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (copy, nonatomic) NSString *purpose; // ivar: _purpose


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_nfcTagScannedCount;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)nfcTagScanned;
-(void)nfcTagScannedCount:(NSInteger)arg0 ;
-(void)uiActivatedWithCompletion:(id)arg0 ;
-(void)uiInvalidatedWithCompletion:(id)arg0 ;


@end


#endif