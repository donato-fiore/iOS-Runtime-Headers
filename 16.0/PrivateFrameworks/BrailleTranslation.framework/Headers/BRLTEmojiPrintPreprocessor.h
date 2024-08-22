// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTEMOJIPRINTPREPROCESSOR_H
#define BRLTEMOJIPRINTPREPROCESSOR_H

@class NSString;
@protocol BRLTPrintPreprocessor;

#import <Foundation/Foundation.h>


@interface BRLTEmojiPrintPreprocessor : NSObject <BRLTPrintPreprocessor>

 {
    *__EmojiLocaleDataWrapper _locale;
    NSString *_primaryLanguageCode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPrimaryLanguageCode:(id)arg0 ;
-(id)preprocessPrintString:(id)arg0 withLocationMap:(*id)arg1 ;
-(id)preprocessPrintString:(id)arg0 withLocationMap:(*id)arg1 isEightDot:(BOOL)arg2 ;
-(void)_commonInit;
-(void)_setupLocale;
-(void)dealloc;


@end


#endif