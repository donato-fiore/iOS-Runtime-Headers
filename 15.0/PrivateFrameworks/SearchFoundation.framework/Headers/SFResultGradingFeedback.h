// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRESULTGRADINGFEEDBACK_H
#define SFRESULTGRADINGFEEDBACK_H

@class NSString;
@protocol NSCopying;


#import "SFResultFeedback.h"

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying>



@property (readonly, nonatomic) NSUInteger grade; // ivar: _grade
@property (copy, nonatomic) NSString *textFeedback; // ivar: _textFeedback


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(id)arg0 grade:(NSUInteger)arg1 ;
-(id)initWithResult:(id)arg0 grade:(NSUInteger)arg1 textFeedback:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif