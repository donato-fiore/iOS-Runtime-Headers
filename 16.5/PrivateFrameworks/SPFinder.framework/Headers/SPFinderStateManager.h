// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPFINDERSTATEMANAGER_H
#define SPFINDERSTATEMANAGER_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPFinderStateManagement, SPFinderStateXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPFinderStateManager : NSObject <SPFinderStateManagement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SPFinderStateXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (copy, nonatomic) id *stateChangedBlock; // ivar: _stateChangedBlock
@property (copy, nonatomic) id *stateInfoChangedBlock; // ivar: stateInfoChangedBlock
@property (readonly) Class superclass;


-(id)init;
-(id)remoteInterface;
-(void)dealloc;
-(void)disableFinderModeWithCompletion:(id)arg0 ;
-(void)enableFinderModeWithCompletion:(id)arg0 ;
-(void)fetchFinderState:(id)arg0 ;
-(void)setActiveCache:(NSInteger)arg0 completion:(id)arg1 ;
-(void)start;
-(void)stateInfoWithCompletion:(id)arg0 ;
-(void)updateStateBlock;


@end


#endif