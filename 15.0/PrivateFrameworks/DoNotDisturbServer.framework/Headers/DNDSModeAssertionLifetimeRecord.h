// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODEASSERTIONLIFETIMERECORD_H
#define DNDSMODEASSERTIONLIFETIMERECORD_H

@class NSString, NSNumber;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>


@interface DNDSModeAssertionLifetimeRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) NSString *behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *eventUniqueID; // ivar: _eventUniqueID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (retain, nonatomic) NSString *lifetimeType; // ivar: _lifetimeType
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (retain, nonatomic) NSNumber *occurrenceDate; // ivar: _occurrenceDate
@property (retain, nonatomic) NSNumber *onlyDuringEvent; // ivar: _onlyDuringEvent
@property (retain, nonatomic) NSNumber *radius; // ivar: _radius
@property (retain, nonatomic) NSString *regionIdentifier; // ivar: _regionIdentifier
@property (retain, nonatomic) NSString *scheduleIdentifier; // ivar: _scheduleIdentifier
@property (retain, nonatomic) NSNumber *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)recordForAssertionLifetime:(id)arg0 ;
+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif