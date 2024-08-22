// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASYNCSTATELOGEVENT_H
#define HMDDATASYNCSTATELOGEVENT_H

@class HMMLogEvent;



@interface HMDDataSyncStateLogEvent : HMMLogEvent {
    BOOL _shouldSubmit;
}


@property (nonatomic) NSUInteger dataSyncState; // ivar: _dataSyncState


+(id)dataSyncStateEstablished:(NSUInteger)arg0 ;
-(BOOL)shouldSubmit;
-(id)initWithDataSyncState:(NSUInteger)arg0 ;
-(id)initWithDataSyncState:(NSUInteger)arg0 currentDataSyncContext:(id)arg1 ;


@end


#endif