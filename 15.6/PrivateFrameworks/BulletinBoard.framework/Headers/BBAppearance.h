// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBAPPEARANCE_H
#define BBAPPEARANCE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BBImage.h"

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) BBImage *image; // ivar: _image
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)appearanceWithTitle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif