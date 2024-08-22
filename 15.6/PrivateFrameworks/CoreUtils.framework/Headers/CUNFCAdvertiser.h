// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUNFCADVERTISER_H
#define CUNFCADVERTISER_H

@class NFNdefTagSession, NSURL, NSString;
@protocol NFNdefTagSessionDelegate, NFSession, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CURetrier.h"

@interface CUNFCAdvertiser : NSObject <NFNdefTagSessionDelegate>

 {
    BOOL _invalidateCalled;
    CURetrier *_nfcRetrier;
    NFNdefTagSession *_nfcSession;
    BOOL _nfcStarted;
    NSObject<NFSession> *_nfcTempSession;
}


@property (copy, nonatomic) NSURL *advertisementURI; // ivar: _advertisementURI
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tagStateChangedHandler; // ivar: _tagStateChangedHandler


-(id)init;
-(void)_ensureSessionStarted;
-(void)_ensureSessionStopped;
-(void)_handleSessionStarted:(id)arg0 error:(id)arg1 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)ndefTagSession:(id)arg0 didTagStateChange:(unsigned int)arg1 ;
-(void)ndefTagSessionDidEndUnexpectedly:(id)arg0 ;


@end


#endif