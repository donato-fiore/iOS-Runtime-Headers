// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSEARCHATTRIBUTIONMANIFESTMANAGER_H
#define GEOSEARCHATTRIBUTIONMANIFESTMANAGER_H

@protocol GEOSearchAttributionServerProxy;

#import <Foundation/Foundation.h>


@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) NSObject<GEOSearchAttributionServerProxy> *serverProxy; // ivar: _serverProxy


+(id)sharedManager;
+(void)setUseLocalProxy:(BOOL)arg0 ;
+(void)useLocalProxy;
+(void)useProxy:(Class)arg0 ;
+(void)useRemoteProxy;
-(id)init;
-(void)loadAttributionInfoForIdentifiers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif