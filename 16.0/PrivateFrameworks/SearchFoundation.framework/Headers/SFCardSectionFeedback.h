// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCARDSECTIONFEEDBACK_H
#define SFCARDSECTIONFEEDBACK_H

@class NSString;
@protocol SFCardSection;


#import "SFFeedback.h"

@interface SFCardSectionFeedback : SFFeedback

@property (retain, nonatomic) NSObject<SFCardSection> *cardSection; // ivar: _cardSection
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (copy, nonatomic) NSString *resultId; // ivar: _resultId


+(BOOL)supportsSecureCoding;
-(id)initWithCardSection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif