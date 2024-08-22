// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AATRUSTEDCONTACT_H
#define AATRUSTEDCONTACT_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AATrustedContact : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *custodianID; // ivar: _custodianID
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 status:(NSInteger)arg1 handle:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 displayName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif