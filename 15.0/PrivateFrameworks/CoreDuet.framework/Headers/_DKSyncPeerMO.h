// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCPEERMO_H
#define _DKSYNCPEERMO_H

@class NSManagedObject, NSString, NSDate, NSUUID;



@interface _DKSyncPeerMO : NSManagedObject

@property (copy, nonatomic) NSString *cloudID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *rapportID;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *version;


+(id)fetchRequest;


@end


#endif