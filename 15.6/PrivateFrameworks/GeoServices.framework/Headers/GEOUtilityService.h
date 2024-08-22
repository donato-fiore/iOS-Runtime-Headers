// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOUTILITYSERVICE_H
#define GEOUTILITYSERVICE_H

@class NSString;
@protocol GEOUtilityServiceProxy;

#import <Foundation/Foundation.h>


@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy>

 {
    id<GEOUtilityServiceProxy> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedService;
+(void)useProxy:(Class)arg0 ;
-(id)getGeoServicesCacheDirectoryPath;
-(id)getHomeDirectoryPath;
-(id)init;
-(void)getCurrentGeoServicesState:(id)arg0 callback:(id)arg1 ;


@end


#endif