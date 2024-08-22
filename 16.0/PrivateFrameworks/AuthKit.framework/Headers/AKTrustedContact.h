// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTRUSTEDCONTACT_H
#define AKTRUSTEDCONTACT_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKTrustedContact : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *hashedWrappingKeyRKC; // ivar: _hashedWrappingKeyRKC
@property (nonatomic) NSInteger status; // ivar: _status
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 status:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif