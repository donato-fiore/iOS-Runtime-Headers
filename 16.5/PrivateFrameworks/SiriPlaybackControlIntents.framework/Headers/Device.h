// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEVICE_H
#define DEVICE_H

@class INObject, NSNumber, NSString, NSArray;


#import "DeviceContext.h"

@interface Device : INObject

@property (nonatomic, retain) NSNumber *confirmed;
@property (nonatomic, retain) DeviceContext *context;
@property (nonatomic, retain) NSNumber *currentHome;
@property (nonatomic, retain) NSNumber *currentRoom;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSNumber *disambiguated;
@property (nonatomic, copy) NSString *displayableName;
@property (nonatomic, retain) NSNumber *isDeviceSelectedUsingContext;
@property (nonatomic, retain) NSNumber *isEndpoint;
@property (nonatomic, retain) NSNumber *isPreResolved;
@property (nonatomic, copy) NSString *mediaSystemId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *numberOfAffectedRooms;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *routeId;
@property (nonatomic, retain) NSNumber *skipConfirmation;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSArray *zoneNames;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif