// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCARDVIEWAPPEARFEEDBACK_H
#define SFCARDVIEWAPPEARFEEDBACK_H

@class NSString;


#import "SFFeedback.h"
#import "SFCard.h"

@interface SFCardViewAppearFeedback : SFFeedback

@property (retain, nonatomic) SFCard *card; // ivar: _card
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (nonatomic) unsigned int level; // ivar: _level


+(BOOL)supportsSecureCoding;
-(id)initWithCard:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif