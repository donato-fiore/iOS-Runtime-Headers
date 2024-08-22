// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CREATEEVENTINTENT_H
#define CREATEEVENTINTENT_H

@class INIntent, CLPlacemark, INPerson, NSString;


#import "DateComponentsRange.h"

@interface CreateEventIntent : INIntent

@property (nonatomic, retain) DateComponentsRange *dateTimeRange;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic, retain) INPerson *participants;
@property (nonatomic, copy) NSString *title;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif