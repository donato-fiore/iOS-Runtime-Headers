// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUPGRADEFLOWOPTIONS_H
#define ICQUPGRADEFLOWOPTIONS_H

@class UIColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) UIColor *buttonTintColor; // ivar: _buttonTintColor
@property (copy, nonatomic) UIColor *navigationBarTintColor; // ivar: _navigationBarTintColor


+(BOOL)supportsSecureCoding;
+(id)flowOptionsFromData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)serializedData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif