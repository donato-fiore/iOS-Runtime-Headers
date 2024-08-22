// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOMMANDENGAGEMENTFEEDBACK_H
#define SFCOMMANDENGAGEMENTFEEDBACK_H



#import "SFFeedback.h"
#import "SFButtonItem.h"
#import "SFCardSection.h"
#import "SFCommand.h"
#import "SFSearchResult.h"
#import "SFResultSection.h"

@interface SFCommandEngagementFeedback : SFFeedback

@property (retain, nonatomic) SFButtonItem *button; // ivar: _button
@property (retain, nonatomic) SFCardSection *cardSection; // ivar: _cardSection
@property (retain, nonatomic) SFCommand *command; // ivar: _command
@property (retain, nonatomic) SFSearchResult *result; // ivar: _result
@property (retain, nonatomic) SFResultSection *resultSection; // ivar: _resultSection
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(id)arg0 cardSection:(id)arg1 ;
-(id)initWithCommand:(id)arg0 cardSection:(id)arg1 result:(id)arg2 button:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif