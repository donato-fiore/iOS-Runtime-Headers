// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDEBUGADVERTISEMENTSETTINGSPROVIDER_H
#define SXDEBUGADVERTISEMENTSETTINGSPROVIDER_H

@protocol SXDebugAdvertisementSettingsProvider, SXAdvertisingSettings;

#import <Foundation/Foundation.h>


@interface SXDebugAdvertisementSettingsProvider : NSObject <SXDebugAdvertisementSettingsProvider>



@property (readonly, nonatomic) NSObject<SXAdvertisingSettings> *debugSettings; // ivar: _debugSettings


-(id)initWithDebugSettings:(id)arg0 ;


@end


#endif