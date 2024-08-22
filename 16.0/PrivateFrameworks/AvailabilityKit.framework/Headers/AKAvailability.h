// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAVAILABILITY_H
#define AKAVAILABILITY_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface AKAvailability : NSObject

@property (readonly, nonatomic) NSUUID *activityIdentifier;
@property (readonly, nonatomic) NSString *activityIdentifierString; // ivar: _activityIdentifierString
@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, nonatomic, getter=isAvailableToMe) BOOL availableToMe;
@property (readonly, nonatomic) BOOL personalizedAvailability; // ivar: _personalizedAvailability


+(id)logger;
-(id)_initWithAvailable:(BOOL)arg0 activityIdentifierString:(id)arg1 personalizedAvailability:(BOOL)arg2 ;
-(id)_payloadDictionary;
-(id)initWithAvailable:(BOOL)arg0 activityIdentifier:(id)arg1 ;
-(id)initWithAvailable:(BOOL)arg0 activityIdentifierString:(id)arg1 ;
-(id)initWithPublishedStatus:(id)arg0 ;
-(id)initWithStatusPayload:(id)arg0 invitationPayload:(id)arg1 ;
-(id)statusPublishRequest;


@end


#endif