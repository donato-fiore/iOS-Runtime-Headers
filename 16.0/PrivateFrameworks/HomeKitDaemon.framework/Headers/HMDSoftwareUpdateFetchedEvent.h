// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSOFTWAREUPDATEFETCHEDEVENT_H
#define HMDSOFTWAREUPDATEFETCHEDEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDSoftwareUpdateFetchedEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=wasNewUpdateFetched) BOOL newUpdateFetched; // ivar: _newUpdateFetched
@property (readonly) Class superclass;
@property (nonatomic, getter=wasUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(id)eventWasUserInitiated:(BOOL)arg0 wasNewUpdateFetched:(BOOL)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif