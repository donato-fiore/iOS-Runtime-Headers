// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFONT_H
#define NSFONT_H

@protocol NSSecureCoding, NSCopying;


#import "UIFont.h"

@interface NSFont : UIFont <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
+(id)fontWithName:(id)arg0 size:(CGFloat)arg1 ;
-(Class)classForCoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif