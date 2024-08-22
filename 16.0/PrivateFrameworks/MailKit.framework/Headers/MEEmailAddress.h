// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEEMAILADDRESS_H
#define MEEMAILADDRESS_H

@class NSString, ECEmailAddress;
@protocol ECEmailAddressConvertible, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MEEmailAddress : NSObject <ECEmailAddressConvertible, NSSecureCoding, NSCopying>

 {
    id<ECEmailAddressConvertible> *_convertible;
}


@property (readonly, copy, nonatomic) NSString *addressString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *rawString;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)emailAddressesForAddresses:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif