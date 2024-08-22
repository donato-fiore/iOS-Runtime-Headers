// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFCONTROLGROUPIDENTIFIER_H
#define DMFCONTROLGROUPIDENTIFIER_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned short groupID; // ivar: _groupID
@property (readonly, copy, nonatomic) NSUUID *organizationUUID; // ivar: _organizationUUID
@property (readonly, copy, nonatomic) NSString *stringValue;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGroupIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrganizationUUID:(id)arg0 groupID:(unsigned short)arg1 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif