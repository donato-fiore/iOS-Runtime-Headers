// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EAEMAILADDRESS_H
#define _EAEMAILADDRESS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EAEmailAddress : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, copy, nonatomic) NSString *rawAddress;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif