// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXADDVIEWSEXPRESSIONPARSER_H
#define _SVXADDVIEWSEXPRESSIONPARSER_H

@class SVXExpressionParser;



@interface _SVXAddViewsExpressionParser : SVXExpressionParser

@property (nonatomic) BOOL ignoresLocallyParseableExpressions; // ivar: _ignoresLocallyParseableExpressions


-(id)initWithParsingService:(id)arg0 preferences:(id)arg1 ;
-(void)parseAddViews:(id)arg0 reply:(id)arg1 ;


@end


#endif