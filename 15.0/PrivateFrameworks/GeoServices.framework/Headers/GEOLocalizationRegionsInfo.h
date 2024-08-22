// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOCALIZATIONREGIONSINFO_H
#define GEOLOCALIZATIONREGIONSINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface GEOLocalizationRegionsInfo : NSObject {
    NSDictionary *_regions;
    os_unfair_lock_s _regionsLock;
}




-(BOOL)needsLocalizationForKey:(struct _GEOTileKey *)arg0 language:(id)arg1 ;
-(id)init;
-(void)reset;


@end


#endif