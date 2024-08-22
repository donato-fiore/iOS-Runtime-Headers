// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSLANGUAGESELECTOR_H
#define PSLANGUAGESELECTOR_H


#import <Foundation/Foundation.h>


@interface PSLanguageSelector : NSObject



-(id)deviceLanguageIdentifier;
-(id)preferredLanguages;
-(id)systemLanguages;
-(void)setLanguage:(id)arg0 fallback:(id)arg1 ;


@end


#endif