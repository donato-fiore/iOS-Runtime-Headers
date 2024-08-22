// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFMAPSCARDSECTIONENGAGEMENTFEEDBACK_H
#define SFMAPSCARDSECTIONENGAGEMENTFEEDBACK_H



#import "SFCardSectionEngagementFeedback.h"

@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) int feedbackType; // ivar: _feedbackType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeedbackType:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif