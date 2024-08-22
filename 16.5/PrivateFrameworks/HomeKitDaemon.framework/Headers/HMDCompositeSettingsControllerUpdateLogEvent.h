// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLERUPDATELOGEVENT_H
#define HMDCOMPOSITESETTINGSCONTROLLERUPDATELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCompositeSettingsControllerUpdateLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

 {
    NSString *_keyPath;
}


@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dictionaryRepresentation;
-(id)initWithKeyPath:(id)arg0 date:(id)arg1 ;


@end


#endif