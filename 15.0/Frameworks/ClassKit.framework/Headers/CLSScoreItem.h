// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSCOREITEM_H
#define CLSSCOREITEM_H



#import "CLSActivityItem.h"

@interface CLSScoreItem : CLSActivityItem {
    CGFloat _score;
    CGFloat _maxScore;
}


@property (nonatomic) CGFloat maxScore;
@property (nonatomic) CGFloat score;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 score:(CGFloat)arg2 maxScore:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif