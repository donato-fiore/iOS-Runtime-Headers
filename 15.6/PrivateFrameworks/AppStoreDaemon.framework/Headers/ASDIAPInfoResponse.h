// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDIAPINFORESPONSE_H
#define ASDIAPINFORESPONSE_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;


#import "ASDRequestResponse.h"

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *iaps; // ivar: _iaps


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIAPs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif