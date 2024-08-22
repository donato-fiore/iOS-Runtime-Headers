// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUTOMATEHOMEINTENT_H
#define AUTOMATEHOMEINTENT_H

@class INIntent, NSString;


#import "Automatable.h"
#import "Trigger.h"

@interface AutomateHomeIntent : INIntent

@property (nonatomic, retain) Automatable *automatableTask;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) Trigger *trigger;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif