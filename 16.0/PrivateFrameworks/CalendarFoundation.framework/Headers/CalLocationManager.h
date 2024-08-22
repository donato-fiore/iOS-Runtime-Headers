// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALLOCATIONMANAGER_H
#define CALLOCATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface CalLocationManager : NSObject



+(BOOL)isCurrentProcessEntitledToUseLocationServices;
+(id)placemarkForAddress:(id)arg0 withCompletionBlock:(id)arg1 ;
+(id)placemarkForLocation:(id)arg0 withCompletionBlock:(id)arg1 ;
+(id)strictGeocodeString:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)_loadMapKit;
+(void)currentLocationWithCompletionBlock:(id)arg0 ;


@end


#endif