// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYGENERATIONCONTEXT_H
#define PGMEMORYGENERATIONCONTEXT_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNodeCollection.h"
#import "PGGraphLocationHelper.h"
#import "PGMemoryMomentNodesWithBlockedFeatureCache.h"
#import "PGMemoryProcessedScenesAndFacesCache.h"

@interface PGMemoryGenerationContext : NSObject {
    PGGraphMomentNodeCollection *_momentNodesAtSensitiveLocations;
}


@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper; // ivar: _locationHelper
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache; // ivar: _momentNodesWithBlockedFeatureCache
@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache; // ivar: _processedScenesAndFacesCache


-(id)initWithPhotoLibrary:(id)arg0 userFeedbackCalculator:(id)arg1 graph:(id)arg2 loggingConnection:(id)arg3 ;
-(id)initWithProcessedScenesAndFacesCache:(id)arg0 momentNodesWithBlockedFeatureCache:(id)arg1 locationHelper:(id)arg2 loggingConnection:(id)arg3 ;
-(id)momentNodesAtSensitiveLocationsInGraph:(id)arg0 ;


@end


#endif