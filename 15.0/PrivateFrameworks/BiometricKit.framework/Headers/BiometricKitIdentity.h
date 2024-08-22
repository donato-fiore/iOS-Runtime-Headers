// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BIOMETRICKITIDENTITY_H
#define BIOMETRICKITIDENTITY_H

@class NSDate, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) int attribute; // ivar: _attribute
@property (retain, nonatomic) NSDate *creationTime; // ivar: _creationTime
@property (nonatomic) int entity; // ivar: _entity
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) NSInteger matchCount; // ivar: _matchCount
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) NSInteger updateCount; // ivar: _updateCount
@property (nonatomic) unsigned int userID; // ivar: _userID
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif