// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIATTRIBUTECAMERA_H
#define DIATTRIBUTECAMERA_H

@class NSArray;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeCamera : DIAttribute <NSSecureCoding>



@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue; // ivar: currentValue
@property (retain, nonatomic) NSArray *scanRequirements; // ivar: _scanRequirements


+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif