// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPSENDERLIVESTRATEGY_H
#define MSPSENDERLIVESTRATEGY_H



#import "MSPSenderStrategy.h"

@interface MSPSenderLiveStrategy : MSPSenderStrategy {
    BOOL _needToSendRoute;
}




-(BOOL)_needToSendEtaRefreshFor:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)etaUpdated:(id)arg0 ;
-(void)routeUpdated:(id)arg0 ;
-(void)setState:(id)arg0 ;
-(void)trafficUpdated:(id)arg0 ;
-(void)waypointsUpdated:(id)arg0 ;


@end


#endif