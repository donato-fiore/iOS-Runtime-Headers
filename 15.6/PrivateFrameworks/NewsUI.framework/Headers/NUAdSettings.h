// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUADSETTINGS_H
#define NUADSETTINGS_H

@class NSString;
@protocol NUAdSettings, SXAdvertisingSettings;

#import <Foundation/Foundation.h>


@interface NUAdSettings : NSObject <NUAdSettings>



@property (readonly, nonatomic) NSObject<SXAdvertisingSettings> *debugAdvertisementSettings; // ivar: _debugAdvertisementSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDebugAdvertisementSettings:(id)arg0 ;


@end


#endif