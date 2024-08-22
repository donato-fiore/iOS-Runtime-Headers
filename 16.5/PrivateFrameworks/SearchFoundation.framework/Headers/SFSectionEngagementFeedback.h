// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSECTIONENGAGEMENTFEEDBACK_H
#define SFSECTIONENGAGEMENTFEEDBACK_H

@protocol NSCopying;


#import "SFFeedback.h"
#import "SFResultSection.h"

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying>



@property (copy, nonatomic) SFResultSection *section; // ivar: _section
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSection:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif