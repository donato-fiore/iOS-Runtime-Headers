// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIBUBBLETIPINLINEANCHORINFO_H
#define AMSUIBUBBLETIPINLINEANCHORINFO_H


#import <Foundation/Foundation.h>


@interface AMSUIBubbleTipInlineAnchorInfo : NSObject

@property (nonatomic) NSUInteger arrowDirection; // ivar: _arrowDirection
@property (nonatomic) CGFloat arrowOffset; // ivar: _arrowOffset
@property (nonatomic) CGFloat relativeArrowOffset; // ivar: _relativeArrowOffset


-(id)initWithArrowDirection:(NSUInteger)arg0 arrowOffset:(CGFloat)arg1 ;
-(id)initWithArrowDirection:(NSUInteger)arg0 relativeArrowOffset:(CGFloat)arg1 ;


@end


#endif