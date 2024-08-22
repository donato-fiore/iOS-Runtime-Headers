// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILABELSYNTHESIZEDCONTENT_H
#define _UILABELSYNTHESIZEDCONTENT_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "_UILabelContent.h"
#import "UIColor.h"

@interface _UILabelSynthesizedContent : NSObject <NSCopying, NSMutableCopying>

 {
    ? _flags;
}


@property (readonly, nonatomic) _UILabelContent *content; // ivar: _content
@property (readonly, nonatomic) BOOL disableLinkHypenation;
@property (readonly, nonatomic) BOOL eliminateShadows;
@property (readonly, nonatomic) BOOL hasExplicitBaselineOffset;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) BOOL overallWritingDirectionFollowsLayoutDirection;
@property (readonly, nonatomic) UIColor *overrideTextColor; // ivar: _overrideTextColor
@property (readonly, nonatomic) NSInteger semanticContentAttribute; // ivar: _semanticContentAttribute


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reverseNaturalAlignment;
-(NSUInteger)hash;
-(id)_synthesizedAttributedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)synthesizedAttributedString;
-(id)synthesizedAttributes;
-(void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)arg0 ;
-(void)_isolateStringWritingDirectionInAttributedString:(id)arg0 ;


@end


#endif