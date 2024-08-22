// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXEXPRESSIONPARSER_H
#define _SVXEXPRESSIONPARSER_H

@class AFPreferences;
@protocol SVXExpressionParsingServing;

#import <Foundation/Foundation.h>


@interface _SVXExpressionParser : NSObject

@property (readonly, nonatomic) NSObject<SVXExpressionParsingServing> *parsingService; // ivar: _parsingService
@property (readonly, nonatomic) AFPreferences *preferences; // ivar: _preferences


-(id)initWithParsingService:(id)arg0 preferences:(id)arg1 ;


@end


#endif