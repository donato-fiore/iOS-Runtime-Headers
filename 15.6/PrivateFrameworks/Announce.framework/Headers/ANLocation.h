// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANLOCATION_H
#define ANLOCATION_H

@class NSString, NSArray, NSNumber, NSUUID;
@protocol ANMessage, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANLocation : NSObject <ANMessage, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *deviceIDs; // ivar: _deviceIDs
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *homeLocationStatus; // ivar: _homeLocationStatus
@property (copy, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (retain, nonatomic) NSArray *roomUUIDs; // ivar: _roomUUIDs
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger target;
@property (retain, nonatomic) NSArray *userUUIDs; // ivar: _userUUIDs
@property (retain, nonatomic) NSArray *zoneUUIDs; // ivar: _zoneUUIDs


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeID:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif