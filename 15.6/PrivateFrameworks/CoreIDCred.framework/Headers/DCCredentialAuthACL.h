// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCCREDENTIALAUTHACL_H
#define DCCREDENTIALAUTHACL_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialAuthACL : NSObject <NSSecureCoding>



@property (retain) NSData *aclData; // ivar: _aclData
@property NSUInteger aclType; // ivar: _aclType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif