// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKLABELEXCLUSIONREGION_H
#define VKLABELEXCLUSIONREGION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VKLabelExclusionRegion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly, nonatomic) unsigned int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif