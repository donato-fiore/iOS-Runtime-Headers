// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIATTRIBUTESMSOTP_H
#define DIATTRIBUTESMSOTP_H

@protocol NSSecureCoding;


#import "DIAttributeText.h"

@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding>



@property (nonatomic) NSUInteger validityInSeconds; // ivar: _validityInSeconds


+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)description;
-(id)getCurrentValue;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)submissionString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCurrentValue:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 ;


@end


#endif