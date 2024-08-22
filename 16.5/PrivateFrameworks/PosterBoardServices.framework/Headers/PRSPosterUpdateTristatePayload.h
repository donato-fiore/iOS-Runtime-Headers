// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATETRISTATEPAYLOAD_H
#define PRSPOSTERUPDATETRISTATEPAYLOAD_H

@class NSNumber;
@protocol NSSecureCoding;


#import "PRSPosterUpdatePayload.h"

@interface PRSPosterUpdateTristatePayload : PRSPosterUpdatePayload <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *tristate; // ivar: _tristate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(id)rawValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif