// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATECOLORPAYLOAD_H
#define PRSPOSTERUPDATECOLORPAYLOAD_H

@class BSColor;
@protocol NSSecureCoding;


#import "PRSPosterUpdatePayload.h"

@interface PRSPosterUpdateColorPayload : PRSPosterUpdatePayload <NSSecureCoding>



@property (readonly, nonatomic) BSColor *color; // ivar: _color


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)rawValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif