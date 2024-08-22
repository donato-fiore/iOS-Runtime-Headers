// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMLOCSUPPORT_H
#define AXMLOCSUPPORT_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface AXMLocSupport : NSObject

@property (retain, nonatomic) NSLocale *en_USLocale; // ivar: _en_USLocale


+(id)sharedInstance;
-(BOOL)localeBaseLanguageIsEnglish:(id)arg0 ;
-(id)baseLanguageForLocale:(id)arg0 ;
-(id)localeForLanguageCode:(id)arg0 ;
-(id)localeMatchingBaseLanguageOfLocale:(id)arg0 fromLocales:(id)arg1 ;


@end


#endif