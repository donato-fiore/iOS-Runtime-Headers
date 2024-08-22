// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLOOKUPHINTRELEVANCYFEEDBACK_H
#define SFLOOKUPHINTRELEVANCYFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFLookupHintRelevancyFeedback : SFFeedback

@property (copy, nonatomic) NSString *context; // ivar: _context
@property (nonatomic) BOOL discarded; // ivar: _discarded
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSUInteger grade; // ivar: _grade
@property (nonatomic) _NSRange hintRange; // ivar: _hintRange


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 hintRange:(struct _NSRange )arg1 domain:(id)arg2 discarded:(BOOL)arg3 grade:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif