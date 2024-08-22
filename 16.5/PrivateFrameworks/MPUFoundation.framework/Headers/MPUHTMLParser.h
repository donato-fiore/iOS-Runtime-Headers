// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUHTMLPARSER_H
#define MPUHTMLPARSER_H

@protocol MPUHTMLParserDelegate;

#import <Foundation/Foundation.h>

#import "_MPUHTMLDefaultDelegate.h"

@interface MPUHTMLParser : NSObject {
    _MPUHTMLDefaultDelegate *_defaultDelegate;
}


@property (weak, nonatomic) NSObject<MPUHTMLParserDelegate> *delegate; // ivar: _delegate


+(id)attributedSanitizedStringFromHTMLString:(id)arg0 defaultAttributes:(id)arg1 ;
+(id)displayDelegateWithDefaultAttributes:(id)arg0 ;
+(id)parser;
+(id)parserWithDefaultAttributes:(id)arg0 ;
+(id)sanitizedHTMLString:(id)arg0 ;
-(id)attributedStringForHTMLString:(id)arg0 error:(*id)arg1 ;


@end


#endif