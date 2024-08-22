// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVALUEORIGIN_H
#define CNVALUEORIGIN_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *donationIdentifier; // ivar: _donationIdentifier
@property (readonly, copy, nonatomic) NSString *localizedApplicationName; // ivar: _localizedApplicationName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedApplicationName:(id)arg0 donationIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif