// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCPEER_H
#define _DKSYNCPEER_H

@class NSString, NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface _DKSyncPeer : NSObject

@property (nonatomic, getter=isCompanion) BOOL companion; // ivar: _companion
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *idsDeviceIdentifier; // ivar: _idsDeviceIdentifier
@property (copy, nonatomic) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (nonatomic) BOOL me; // ivar: _me
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *sourceDeviceID; // ivar: _sourceDeviceID
@property (readonly, copy, nonatomic) NSUUID *sourceDeviceUUID;
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (copy, nonatomic) NSString *version; // ivar: _version
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


-(id)description;
-(id)init;
-(id)initWithIDSDeviceIdentifier:(id)arg0 ;
-(id)initWithIDSDeviceIdentifier:(id)arg0 zoneName:(id)arg1 ;
-(id)initWithZoneName:(id)arg0 ;


@end


#endif