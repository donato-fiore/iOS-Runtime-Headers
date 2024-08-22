// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMFQUERYLOGGER_H
#define EMFQUERYLOGGER_H


#import <Foundation/Foundation.h>


@interface EMFQueryLogger : NSObject

@property (readonly, nonatomic) *__EmojiLocaleDataWrapper localeData; // ivar: _localeData


+(id)documentWeightsStringFromQueryResult:(id)arg0 usingLocaleData:(struct __EmojiLocaleDataWrapper *)arg1 ;
+(id)overriddenResultsStringFromQueryResult:(id)arg0 usingLocaleData:(struct __EmojiLocaleDataWrapper *)arg1 ;
-(id)initWithEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg0 ;
-(void)dealloc;
-(void)logQueryResult:(id)arg0 ;


@end


#endif