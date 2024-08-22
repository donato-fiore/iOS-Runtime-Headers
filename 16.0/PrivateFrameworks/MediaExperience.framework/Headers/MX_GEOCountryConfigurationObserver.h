// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MX_GEOCOUNTRYCONFIGURATIONOBSERVER_H
#define MX_GEOCOUNTRYCONFIGURATIONOBSERVER_H

@class GEOCountryConfiguration, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MX_GEOCountryConfigurationObserver : NSObject {
    NSObject<OS_dispatch_queue> *mAccessQueue;
    GEOCountryConfiguration *mCountryConfiguration;
    NSString *mCountryCode;
}




-(id)getCurrentCountryCode;
-(id)init;
-(void)_updateCountryCodeFromCurrentGeoCountryConfiguration:(id)arg0 ;
-(void)countryConfigurationDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif