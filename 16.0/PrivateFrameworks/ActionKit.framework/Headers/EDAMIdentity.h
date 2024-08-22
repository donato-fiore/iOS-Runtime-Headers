// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMIDENTITY_H
#define EDAMIDENTITY_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMContact.h"

@interface EDAMIdentity : FATObject

@property (retain, nonatomic) NSNumber *blocked; // ivar: _blocked
@property (retain, nonatomic) EDAMContact *contact; // ivar: _contact
@property (retain, nonatomic) NSNumber *deactivated; // ivar: _deactivated
@property (retain, nonatomic) NSNumber *eventId; // ivar: _eventId
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSNumber *sameBusiness; // ivar: _sameBusiness
@property (retain, nonatomic) NSNumber *userConnected; // ivar: _userConnected
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


+(id)structFields;
+(id)structName;


@end


#endif