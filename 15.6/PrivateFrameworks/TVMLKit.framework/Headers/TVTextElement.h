// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVTEXTELEMENT_H
#define TVTEXTELEMENT_H

@class NSAttributedString;


#import "TVViewElement.h"

@interface TVTextElement : TVViewElement

@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) NSInteger textStyle;


-(id)attributedStringWithFont:(id)arg0 ;
-(id)attributedStringWithFont:(id)arg0 foregroundColor:(id)arg1 textAlignment:(NSInteger)arg2 ;


@end


#endif