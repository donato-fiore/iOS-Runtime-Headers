// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATECOMPLICATIONPAYLOAD_H
#define PRSPOSTERUPDATECOMPLICATIONPAYLOAD_H

@class NSArray;
@protocol NSSecureCoding;


#import "PRSPosterUpdatePayload.h"

@interface PRSPosterUpdateComplicationPayload : PRSPosterUpdatePayload <NSSecureCoding>



@property (readonly, nonatomic) NSArray *complications; // ivar: _complications


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComplications:(id)arg0 ;
-(id)rawValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif