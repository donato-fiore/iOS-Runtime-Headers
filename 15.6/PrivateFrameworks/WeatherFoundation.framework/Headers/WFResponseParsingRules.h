// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRESPONSEPARSINGRULES_H
#define WFRESPONSEPARSINGRULES_H

@protocol WFSettings;

#import <Foundation/Foundation.h>


@interface WFResponseParsingRules : NSObject

@property (readonly, nonatomic) NSObject<WFSettings> *settings; // ivar: _settings


+(BOOL)aqiEnabledByRules:(id)arg0 forLocation:(id)arg1 ;
-(BOOL)aqiEnabledForCountryCode:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;


@end


#endif