// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSLOCALESELECTOR_H
#define PSLOCALESELECTOR_H


#import <Foundation/Foundation.h>


@interface PSLocaleSelector : NSObject



-(id)availableLocaleIdentifiers;
-(id)currentLocale;
-(void)setLocaleFromLanguageIdentifier:(id)arg0 ;
-(void)setLocaleFromRegionCode:(id)arg0 ;


@end


#endif