// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SETGEOFENCEINTENT_H
#define SETGEOFENCEINTENT_H

@class INIntent, NSNumber;


#import "INFriend.h"
#import "SpeakableLocation.h"

@interface SetGeoFenceIntent : INIntent

@property (nonatomic) NSInteger action;
@property (nonatomic, retain) INFriend *friend;
@property (nonatomic, retain) SpeakableLocation *location;
@property (nonatomic, retain) NSNumber *notifyMe;
@property (nonatomic, retain) NSNumber *notifyOnce;
@property (nonatomic) NSInteger trigger;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif