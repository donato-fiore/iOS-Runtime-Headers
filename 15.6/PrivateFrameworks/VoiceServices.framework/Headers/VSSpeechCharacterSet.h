// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSPEECHCHARACTERSET_H
#define VSSPEECHCHARACTERSET_H

@class NSCharacterSet;

#import <Foundation/Foundation.h>


@interface VSSpeechCharacterSet : NSObject

@property (retain, nonatomic) NSCharacterSet *characterSet; // ivar: _characterSet


+(id)languageMapping;
-(id)initWithLanguage:(id)arg0 ;
-(id)unspeakableRangeOfText:(id)arg0 ;


@end


#endif