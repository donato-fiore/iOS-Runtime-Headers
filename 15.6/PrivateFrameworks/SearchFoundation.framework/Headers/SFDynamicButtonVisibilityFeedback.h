// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDYNAMICBUTTONVISIBILITYFEEDBACK_H
#define SFDYNAMICBUTTONVISIBILITYFEEDBACK_H

@class NSArray;


#import "SFFeedback.h"
#import "SFCardSection.h"

@interface SFDynamicButtonVisibilityFeedback : SFFeedback

@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) SFCardSection *cardSection; // ivar: _cardSection


+(BOOL)supportsSecureCoding;
-(id)initWithCardSection:(id)arg0 buttons:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif