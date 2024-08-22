// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPHELPLOCALECONTROLLER_H
#define HLPHELPLOCALECONTROLLER_H

@class NSArray, NSURL;


#import "HLPRemoteDataController.h"

@interface HLPHelpLocaleController : HLPRemoteDataController {
    NSArray *_supportedLanguageCodes;
    NSURL *_helpBookURL;
}


@property (retain, nonatomic) NSArray *locales; // ivar: _locales
@property (retain, nonatomic) NSArray *preferredLanguagesOverride; // ivar: _preferredLanguagesOverride


-(id)currentLocale;
-(id)englishLocale;
-(id)initWithURL:(id)arg0 ;
-(id)localeWithPreferredLanguages:(id)arg0 ;
-(void)processData:(id)arg0 formattedData:(id)arg1 ;
-(void)processFileURLWithCompletionHandler:(id)arg0 ;


@end


#endif