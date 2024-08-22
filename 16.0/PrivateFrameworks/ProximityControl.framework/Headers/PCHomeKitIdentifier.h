// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCHOMEKITIDENTIFIER_H
#define PCHOMEKITIDENTIFIER_H

@class NSUUID;
@protocol NSSecureCoding;


#import "PCDeviceIdentifier.h"

@interface PCHomeKitIdentifier : PCDeviceIdentifier <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (readonly, copy, nonatomic) NSUUID *homeID; // ivar: _homeID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAccessoryID:(id)arg0 homeID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif