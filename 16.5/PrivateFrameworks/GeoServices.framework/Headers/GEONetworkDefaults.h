// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONETWORKDEFAULTS_H
#define GEONETWORKDEFAULTS_H

@class NSMutableArray, NSDictionary, geo_isolater, NSString;
@protocol _GEONetworkDefaultsServerProxyDelegate, _GEONetworkDefaultsServerProxy;

#import <Foundation/Foundation.h>


@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate>

 {
    id<_GEONetworkDefaultsServerProxy> *_serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    geo_isolater *_networkDefaultsIsolation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)useLocalProxy;
+(id)sharedNetworkDefaults;
+(void)setUseLocalProxy:(BOOL)arg0 ;
-(id)allKeys;
-(id)init;
-(id)valueForKey:(id)arg0 ;
-(void)allKeysAndValues:(id)arg0 ;
-(void)serverProxy:(id)arg0 networkDefaultsDidChange:(id)arg1 ;
-(void)updateIfNecessary:(id)arg0 ;
-(void)updateNetworkDefaults:(id)arg0 ;
-(void)updateNetworkDefaultsWithReason:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif