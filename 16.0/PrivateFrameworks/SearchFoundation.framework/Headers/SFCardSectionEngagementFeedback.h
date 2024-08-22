// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCARDSECTIONENGAGEMENTFEEDBACK_H
#define SFCARDSECTIONENGAGEMENTFEEDBACK_H



#import "SFCardSectionFeedback.h"
#import "SFPunchout.h"

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback

@property (nonatomic) NSUInteger actionCardType; // ivar: _actionCardType
@property (nonatomic) NSUInteger actionTarget; // ivar: _actionTarget
@property (retain, nonatomic) SFPunchout *destination; // ivar: _destination
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCardSection:(id)arg0 destination:(id)arg1 triggerEvent:(NSUInteger)arg2 actionCardType:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif