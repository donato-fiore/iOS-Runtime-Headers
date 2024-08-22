// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLERUPDATELOGEVENT_H
#define HMDCOMPOSITESETTINGSCONTROLLERUPDATELOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCompositeSettingsControllerUpdateLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

 {
    NSString *_keyPath;
}


@property (readonly, nonatomic) NSString *accessoryIdentifier;


-(id)dictionaryRepresentation;
-(id)eventName;
-(id)initWithKeyPath:(id)arg0 date:(id)arg1 ;
-(id)serializedEvent;


@end


#endif