// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIATTRIBUTECUSTOM_H
#define DIATTRIBUTECUSTOM_H

@class NSString;
@protocol NSSecureCoding;


#import "DIAttributeText.h"

@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier;


+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)getCurrentValue;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)submissionString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCurrentValue:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 ;


@end


#endif