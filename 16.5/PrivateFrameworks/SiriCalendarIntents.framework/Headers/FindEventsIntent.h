// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINDEVENTSINTENT_H
#define FINDEVENTSINTENT_H

@class INIntent, NSString, CLPlacemark, NSArray;


#import "DateComponentsRange.h"

@interface FindEventsIntent : INIntent

@property (nonatomic, retain) DateComponentsRange *dateTimeRange;
@property (nonatomic, copy) NSString *eventIdentifier;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic) NSInteger positionalReference;
@property (nonatomic) NSInteger requestedEventAttribute;
@property (nonatomic, copy) NSString *searchQuery;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif