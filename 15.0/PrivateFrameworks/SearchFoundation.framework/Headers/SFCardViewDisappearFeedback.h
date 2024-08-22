// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCARDVIEWDISAPPEARFEEDBACK_H
#define SFCARDVIEWDISAPPEARFEEDBACK_H



#import "SFFeedback.h"
#import "SFCard.h"

@interface SFCardViewDisappearFeedback : SFFeedback

@property (readonly, nonatomic) SFCard *card; // ivar: _card
@property (nonatomic) NSUInteger cardDisappearEvent; // ivar: _cardDisappearEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCard:(id)arg0 event:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif