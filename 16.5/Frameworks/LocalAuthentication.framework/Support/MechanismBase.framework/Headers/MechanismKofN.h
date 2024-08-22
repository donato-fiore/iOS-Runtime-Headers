// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MECHANISMKOFN_H
#define MECHANISMKOFN_H

@class NSMutableArray, NSArray;


#import "MechanismBase.h"

@interface MechanismKofN : MechanismBase {
    NSMutableArray *_runningMechanisms;
    BOOL _finishing;
}


@property (readonly, nonatomic, getter=isAND) BOOL AND; // ivar: _AND
@property (readonly, nonatomic, getter=isOR) BOOL OR; // ivar: _OR
@property (readonly, nonatomic) NSUInteger k; // ivar: _k
@property (readonly, nonatomic) NSUInteger n; // ivar: _n
@property (readonly, nonatomic, getter=isSerial) BOOL serial; // ivar: _serial
@property (readonly, nonatomic) NSArray *submechanisms; // ivar: _submechanisms


+(id)mechanismWithK:(NSUInteger)arg0 ofSubmechanisms:(id)arg1 serial:(BOOL)arg2 request:(id)arg3 ;
+(id)mechanismWithK:(NSUInteger)arg0 ofSubmechanisms:(id)arg1 serial:(BOOL)arg2 request:(id)arg3 preserveStandaloneReorganizers:(BOOL)arg4 ;
-(BOOL)pause:(BOOL)arg0 forEvent:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)arg0 ;
-(BOOL)requiresUiWithEventProcessing:(id)arg0 ;
-(id)additionalControllerInternalInfoForPolicy:(NSInteger)arg0 ;
-(id)availabilityEventsForPurpose:(NSInteger)arg0 ;
-(id)bestEffortAvailableMechanismForRequest:(id)arg0 error:(*id)arg1 ;
-(id)findMechanismWithEventIdentifier:(NSInteger)arg0 ;
-(id)initWithK:(NSUInteger)arg0 ofSubmechanisms:(id)arg1 serial:(BOOL)arg2 request:(id)arg3 ;
-(void)_runSubmechanismAtIndex:(NSInteger)arg0 hints:(id)arg1 eventsDelegate:(id)arg2 succeeded:(NSInteger)arg3 failed:(NSInteger)arg4 results:(id)arg5 reply:(id)arg6 ;
-(void)finishRunWithResult:(id)arg0 error:(id)arg1 ;
-(void)runWithHints:(id)arg0 eventsDelegate:(id)arg1 reply:(id)arg2 ;


@end


#endif