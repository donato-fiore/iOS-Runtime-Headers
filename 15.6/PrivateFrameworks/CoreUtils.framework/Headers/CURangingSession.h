// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CURANGINGSESSION_H
#define CURANGINGSESSION_H

@class NSArray, PRContactAllowlist, PRSharingSession, NSString;
@protocol PRSharingSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CURangingSession : NSObject <PRSharingSessionDelegate>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersChanged;
    NSArray *_peersRanging;
    PRContactAllowlist *_prResponder;
    int _prRangingInitiated;
    PRSharingSession *_prRangingSession;
    *LogCategory _ucat;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *measurementHandler; // ivar: _measurementHandler
@property (copy, nonatomic) id *measurementHandlerEx; // ivar: _measurementHandlerEx
@property (copy, nonatomic) NSArray *peers; // ivar: _peers
@property (copy, nonatomic) id *statusChangedHandler; // ivar: _statusChangedHandler
@property (readonly, nonatomic) unsigned int statusFlags; // ivar: _statusFlags
@property (readonly) Class superclass;


-(id)init;
-(void)_invalidate;
-(void)_invalidated;
-(void)_update;
-(void)_updateInitiator;
-(void)_updatePeers;
-(void)_updateResponder;
-(void)activate;
-(void)addSample:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)session:(id)arg0 didChangeProximitySensorState:(NSUInteger)arg1 ;
-(void)session:(id)arg0 didEstimateScores:(id)arg1 ;
-(void)session:(id)arg0 didFailwithError:(id)arg1 ;


@end


#endif