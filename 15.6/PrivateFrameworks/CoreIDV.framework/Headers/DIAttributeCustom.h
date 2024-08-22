// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIATTRIBUTECUSTOM_H
#define DIATTRIBUTECUSTOM_H

@protocol NSSecureCoding;


#import "DIAttributeText.h"

@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)getCurrentValue;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)submissionString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCurrentValue:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;


@end


#endif