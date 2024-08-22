// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCDEVICELIGHT_H
#define GCDEVICELIGHT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCColor.h"

@interface GCDeviceLight : NSObject <NSSecureCoding>



@property (copy, nonatomic) GCColor *color; // ivar: _color


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif