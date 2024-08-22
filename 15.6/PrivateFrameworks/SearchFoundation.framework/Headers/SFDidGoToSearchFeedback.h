// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDIDGOTOSEARCHFEEDBACK_H
#define SFDIDGOTOSEARCHFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFDidGoToSearchFeedback : SFFeedback

@property (nonatomic) NSUInteger endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInput:(id)arg0 endpoint:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif