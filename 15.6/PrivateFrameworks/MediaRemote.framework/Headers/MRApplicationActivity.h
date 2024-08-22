// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAPPLICATIONACTIVITY_H
#define MRAPPLICATIONACTIVITY_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying, NSCopying>



@property (readonly, nonatomic) int creatorProcessID; // ivar: _creatorProcessID
@property (readonly, nonatomic) NSString *primaryApplicationDisplayID; // ivar: _primaryApplicationDisplayID
@property (readonly, nonatomic) NSString *secondaryApplicationDisplayID; // ivar: _secondaryApplicationDisplayID
@property (readonly, nonatomic) int status; // ivar: _status
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryAppDisplayID:(id)arg0 secondaryAppDisplayID:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif