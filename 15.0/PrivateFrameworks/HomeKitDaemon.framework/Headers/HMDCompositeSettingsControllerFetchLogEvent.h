// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLERFETCHLOGEVENT_H
#define HMDCOMPOSITESETTINGSCONTROLLERFETCHLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCompositeSettingsControllerFetchLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath


-(id)dictionaryRepresentation;
-(id)eventName;
-(id)initWithKeyPath:(id)arg0 date:(id)arg1 ;
-(id)serializedEvent;


@end


#endif