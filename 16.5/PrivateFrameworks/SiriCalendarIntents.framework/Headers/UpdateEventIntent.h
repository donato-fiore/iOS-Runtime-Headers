// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPDATEEVENTINTENT_H
#define UPDATEEVENTINTENT_H

@class INIntent, NSArray, NSNumber, INPerson, CLPlacemark, NSString;


#import "DateComponentsRange.h"
#import "CalendarEvent.h"

@interface UpdateEventIntent : INIntent

@property (nonatomic, copy) NSArray *addParticipants;
@property (nonatomic, retain) NSNumber *removeLocation;
@property (nonatomic, retain) INPerson *removeParticipants;
@property (nonatomic, retain) DateComponentsRange *setDateTimeRange;
@property (nonatomic, retain) CLPlacemark *setLocation;
@property (nonatomic, copy) NSString *setTitle;
@property (nonatomic, retain) CalendarEvent *targetEvent;
@property (nonatomic, retain) NSNumber *updateAllOccurrences;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif