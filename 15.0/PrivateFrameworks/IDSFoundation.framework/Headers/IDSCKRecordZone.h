// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCKRECORDZONE_H
#define IDSCKRECORDZONE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "IDSCKRecordZoneID.h"

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) IDSCKRecordZoneID *zoneID; // ivar: _zoneID


+(Class)__class;
+(id)alloc;


@end


#endif