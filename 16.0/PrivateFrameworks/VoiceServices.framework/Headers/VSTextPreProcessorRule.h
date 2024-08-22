// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSTEXTPREPROCESSORRULE_H
#define VSTEXTPREPROCESSORRULE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSTextPreProcessorRule : NSObject {
    NSString *_matchPattern;
    NSString *_replacement;
    BOOL _caseSensitive;
    BOOL _eatPunctuation;
}




-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)matchedString:(id)arg0 forTokenInRange:(struct ? *)arg1 ;
-(void)dealloc;


@end


#endif