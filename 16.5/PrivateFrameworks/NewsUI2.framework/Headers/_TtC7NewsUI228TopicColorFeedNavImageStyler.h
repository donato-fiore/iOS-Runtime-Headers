// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI228TOPICCOLORFEEDNAVIMAGESTYLER_H
#define _TTC7NEWSUI228TOPICCOLORFEEDNAVIMAGESTYLER_H

@class SwiftObject, UIFont;
@protocol NEFeedNavImageStylerType;



@interface _TtC7NewsUI228TopicColorFeedNavImageStyler : SwiftObject <NEFeedNavImageStylerType>

 {
    ? tagColor;
    ? feedNavImageStyler;
}


@property (nonatomic, readonly) CGFloat cornerRadius;
@property (nonatomic, readonly) CGFloat padding;
@property (nonatomic, readonly) UIFont *tagTitleFont;


-(id)tagColorFor:(id)arg0 ;


@end


#endif