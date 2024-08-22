// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPHONENUMBERINFO_H
#define CTPHONENUMBERINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *displayPhoneNumber; // ivar: _displayPhoneNumber
@property (nonatomic) BOOL isEditable; // ivar: _isEditable
@property (nonatomic) BOOL isPresent; // ivar: _isPresent
@property (nonatomic) BOOL isRead; // ivar: _isRead
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *number; // ivar: _number


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif