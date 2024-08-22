// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKIDSFIREWALLUPDATINGROSTERPROVIDER_H
#define CRKIDSFIREWALLUPDATINGROSTERPROVIDER_H

@class NSSet, CATOperation, CATOperationQueue;
@protocol CRKIDSLocalFirewallStorage, CRKIDSPrimitives, CRKASMRoster;


#import "CRKASMRosterProviderDecoratorBase.h"

@interface CRKIDSFirewallUpdatingRosterProvider : CRKASMRosterProviderDecoratorBase <CRKIDSLocalFirewallStorage>



@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (copy, nonatomic) NSSet *allowedAppleIDs; // ivar: _allowedAppleIDs
@property (weak, nonatomic) CATOperation *lastWorkOperation; // ivar: _lastWorkOperation
@property (nonatomic, getter=isObservingRoster) BOOL observingRoster; // ivar: _observingRoster
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSObject<CRKASMRoster> *publishedRoster; // ivar: _publishedRoster


+(id)keyPathsForValuesAffectingRoster;
+(id)observedKeyPaths;
+(id)trustedUserAppleIDsFromRoster:(id)arg0 ;
-(id)initWithRosterProvider:(id)arg0 IDSPrimitives:(id)arg1 ;
-(id)roster;
-(void)beginObservingRoster;
-(void)dealloc;
-(void)endObservingRoster;
-(void)enqueueWorkOperation:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)rosterDidChange;
-(void)synchronizeFirewallOperationDidFail:(id)arg0 ;


@end


#endif