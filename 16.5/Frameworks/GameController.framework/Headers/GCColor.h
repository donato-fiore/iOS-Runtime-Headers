// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCOLOR_H
#define GCCOLOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCColor : NSObject <NSCopying, NSSecureCoding>



@property (readonly) float blue; // ivar: _blue
@property (readonly) float green; // ivar: _green
@property (readonly) float red; // ivar: _red


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorPreset:(NSInteger)arg0 ;
-(id)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif