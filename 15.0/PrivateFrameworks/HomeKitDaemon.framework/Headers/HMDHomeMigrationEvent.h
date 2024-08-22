// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEMIGRATIONEVENT_H
#define HMDHOMEMIGRATIONEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomeMigrationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *model; // ivar: _model
@property (readonly, copy) NSString *reason; // ivar: _reason


-(id)attributeDescriptions;
-(id)eventName;
-(id)initWithModel:(id)arg0 reason:(id)arg1 ;
-(id)serializedEvent;


@end


#endif