// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNOBSERVATIONSCACHE_H
#define VNOBSERVATIONSCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface VNObservationsCache : NSObject {
    NSMapTable *_observationsCache;
}




-(id)init;
-(id)observationsAcceptedByRequest:(id)arg0 testedKeyHandler:(id)arg1 ;
-(id)observationsForKey:(id)arg0 ;
-(void)setObservations:(id)arg0 forKey:(id)arg1 ;


@end


#endif