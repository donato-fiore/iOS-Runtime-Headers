// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIATTRIBUTEFOOTER_H
#define DIATTRIBUTEFOOTER_H

@protocol NSSecureCoding;


#import "DIAttributeLabel.h"

@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 ;


@end


#endif