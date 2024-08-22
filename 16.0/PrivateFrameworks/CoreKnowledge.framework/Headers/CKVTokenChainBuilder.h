// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVTOKENCHAINBUILDER_H
#define CKVTOKENCHAINBUILDER_H

@class NSString, NSLocale, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKVTokenChainBuilder : NSObject {
    NSString *_normalizedString;
    NSLocale *_locale;
    NSMutableArray *_tokens;
}




-(id)build;
-(id)init;
-(id)initWithString:(id)arg0 locale:(id)arg1 ;
-(void)addToken:(id)arg0 ;


@end


#endif