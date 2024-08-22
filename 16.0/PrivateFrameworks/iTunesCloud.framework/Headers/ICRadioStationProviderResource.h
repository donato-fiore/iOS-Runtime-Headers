// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICRADIOSTATIONPROVIDERRESOURCE_H
#define ICRADIOSTATIONPROVIDERRESOURCE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface ICRadioStationProviderResource : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithRadioStationProviderResourceDictionary:(id)arg0 ;


@end


#endif