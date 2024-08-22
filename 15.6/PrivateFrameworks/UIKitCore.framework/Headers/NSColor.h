// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCOLOR_H
#define NSCOLOR_H



#import "UIColor.h"

@interface NSColor : UIColor



+(BOOL)supportsSecureCoding;
+(id)colorWithCalibratedRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithCalibratedWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg0 ;


@end


#endif