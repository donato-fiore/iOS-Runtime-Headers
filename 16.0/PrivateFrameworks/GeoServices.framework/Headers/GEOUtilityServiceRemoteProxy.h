// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOUTILITYSERVICEREMOTEPROXY_H
#define GEOUTILITYSERVICEREMOTEPROXY_H

@class NSString;
@protocol GEOUtilityServiceProxy;

#import <Foundation/Foundation.h>


@interface GEOUtilityServiceRemoteProxy : NSObject <GEOUtilityServiceProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getPathSynchronous:(char *)arg0 ;
-(id)getGeoServicesCacheDirectoryPath;
-(id)getHomeDirectoryPath;
-(void)getCurrentGeoServicesState:(id)arg0 callback:(id)arg1 ;


@end


#endif