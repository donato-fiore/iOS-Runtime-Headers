// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFQUANTITYVALUE_H
#define WFQUANTITYVALUE_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFQuantityValue : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDecimalNumber *magnitude; // ivar: _magnitude
@property (readonly, copy, nonatomic) NSString *unitString; // ivar: _unitString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMagnitude:(id)arg0 unitString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif