// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDIDGOTOSITEFEEDBACK_H
#define SFDIDGOTOSITEFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFDidGoToSiteFeedback : SFFeedback

@property (copy, nonatomic) NSString *input; // ivar: _input
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInput:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif