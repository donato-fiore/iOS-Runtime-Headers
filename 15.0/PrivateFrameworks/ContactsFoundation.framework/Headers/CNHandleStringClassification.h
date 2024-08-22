// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNHANDLESTRINGCLASSIFICATION_H
#define CNHANDLESTRINGCLASSIFICATION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNHandleStringClassification : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, copy, nonatomic) NSArray *unknown; // ivar: _unknown


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddresses:(id)arg0 phoneNumbers:(id)arg1 unknown:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif