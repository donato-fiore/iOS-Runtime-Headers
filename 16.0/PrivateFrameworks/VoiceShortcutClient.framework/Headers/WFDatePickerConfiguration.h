// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDATEPICKERCONFIGURATION_H
#define WFDATEPICKERCONFIGURATION_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFDatePickerConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *datePickerMode; // ivar: _datePickerMode
@property (retain, nonatomic) NSDate *defaultDate; // ivar: _defaultDate
@property (retain, nonatomic) NSDate *maximumDate; // ivar: _maximumDate
@property (retain, nonatomic) NSDate *minimumDate; // ivar: _minimumDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif