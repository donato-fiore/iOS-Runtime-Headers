// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSIGNEDCLINICALDATAISSUER_H
#define HKSIGNEDCLINICALDATAISSUER_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataIssuer : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *wellKnownURL; // ivar: _wellKnownURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 wellKnownURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif