// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSENDERMINIMALSTRATEGY_H
#define MSPSENDERMINIMALSTRATEGY_H



#import "MSPSenderStrategy.h"

@interface MSPSenderMinimalStrategy : MSPSenderStrategy {
    BOOL _needToSendInit;
}




-(BOOL)_needToSendEtaRefreshFor:(id)arg0 state:(id)arg1 ;
-(BOOL)_validDestinationState:(id)arg0 ;
-(void)_sendDestinationIfNeeded;
-(void)addParticipants:(id)arg0 ;
-(void)etaUpdated:(id)arg0 ;
-(void)waypointsUpdated:(id)arg0 ;


@end


#endif