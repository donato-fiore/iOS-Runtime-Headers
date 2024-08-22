// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIINPUTMODEPARSER_H
#define TIINPUTMODEPARSER_H

@class NSMutableDictionary, NSCharacterSet;

#import <Foundation/Foundation.h>


@interface TIInputModeParser : NSObject {
    NSMutableDictionary *_inputModeDicts;
    NSCharacterSet *_invalidCharacterSet;
}




+(id)sharedInstance;
-(id)init;
-(id)parseInputMode:(id)arg0 ;
-(id)stringByReplacingInvalidCharactersWithUnderscores:(id)arg0 ;


@end


#endif