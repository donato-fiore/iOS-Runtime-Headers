// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIAAFAMILYMEMBER_H
#define CNUIAAFAMILYMEMBER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNUIAAfamilyMember : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName


+(BOOL)supportsSecureCoding;
+(id)cnuiFamilyMemberWithAAFamilyMember:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif