// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BIOMETRICKITCOREANALYTICSEVENT_H
#define BIOMETRICKITCOREANALYTICSEVENT_H

@class NSString, NSArray, NSDictionary, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface BiometricKitCoreAnalyticsEvent : NSObject {
    NSString *_eventName;
    NSArray *_privateProperties;
    NSDictionary *_boundedFieldLimits;
}


@property (retain) NSNumber *deviceEnclosureColor; // ivar: _deviceEnclosureColor
@property (retain) NSNumber *displayOn; // ivar: _displayOn
@property (retain) NSNumber *eventCanceled; // ivar: _eventCanceled
@property (retain) NSDate *previousEventDate; // ivar: _previousEventDate
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollment; // ivar: _timeSinceLastEnrollment
@property (retain) NSNumber *timeSinceLastEnrollmentBinned; // ivar: _timeSinceLastEnrollmentBinned
@property (retain) NSNumber *timeSinceLastEvent; // ivar: _timeSinceLastEvent


-(BOOL)postEvent;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationArchiving:(BOOL)arg0 ;
-(id)dictionaryRepresentationForClass:(Class)arg0 ;
-(id)getEventDictionary;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 dictionary:(id)arg1 ;
-(id)initWithPersistedDataWithName:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)incrementCountField:(id)arg0 ;
-(void)logAnalyticsDictionary:(id)arg0 ;
-(void)persistData;
-(void)reset;
-(void)resetClass:(Class)arg0 ;
-(void)setNilValueForKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)updateBoundedFieldValue;


@end


#endif