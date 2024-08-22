// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMANAGEMENTCHANNEL_H
#define RMMANAGEMENTCHANNEL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RMManagementChannel : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSString *enrollmentToken; // ivar: _enrollmentToken
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isEnrolled; // ivar: _isEnrolled
@property (readonly, copy, nonatomic) NSString *organizationDescription; // ivar: _organizationDescription
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannel:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 enrollmentToken:(id)arg2 accountIdentifier:(id)arg3 accountDescription:(id)arg4 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 enrollmentToken:(id)arg2 accountIdentifier:(id)arg3 accountDescription:(id)arg4 organizationDescription:(id)arg5 isEnrolled:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif