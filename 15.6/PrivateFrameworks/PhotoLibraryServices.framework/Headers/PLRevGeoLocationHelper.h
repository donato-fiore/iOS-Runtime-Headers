// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLREVGEOLOCATIONHELPER_H
#define PLREVGEOLOCATIONHELPER_H


#import <Foundation/Foundation.h>


@interface PLRevGeoLocationHelper : NSObject



+(BOOL)isAutoNaviCountryCode:(id)arg0 ;
+(BOOL)isAutoNaviRevGeoProvider:(id)arg0 ;
+(BOOL)isCurrentRevGeoProviderAutoNavi;
+(id)appleProviderID;
+(id)autoNaviCountryCode;
+(id)autoNaviProviderID;
+(id)currentRevGeoProvider;
+(void)simulateAutoNaviForBlock:(id)arg0 ;


@end


#endif