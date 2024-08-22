// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDATABASECKOPERATIONCOMPLETIONEVENT_H
#define HMDDATABASECKOPERATIONCOMPLETIONEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDDatabaseCKOperationCompletionEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContainerIdentifier:(id)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif