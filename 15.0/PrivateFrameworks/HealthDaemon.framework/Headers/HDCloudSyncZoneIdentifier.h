// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCZONEIDENTIFIER_H
#define HDCLOUDSYNCZONEIDENTIFIER_H

@class NSString, CKRecordZoneID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneIdentifier; // ivar: _zoneIdentifier


+(BOOL)supportsSecureCoding;
+(id)identifierForZone:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentIgnoringOwnerToZone:(id)arg0 ;
-(BOOL)isEquivalentIgnoringOwnerToZone:(id)arg0 container:(id)arg1 ;
-(BOOL)isEquivalentToZone:(id)arg0 container:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForZone:(id)arg0 container:(id)arg1 ;
-(id)initForZone:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif