// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROADMATCHER_H
#define GEOROADMATCHER_H


#import <Foundation/Foundation.h>

#import "GEOMapFeatureAccess.h"

@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
}


@property (nonatomic) BOOL useRawLocations; // ivar: _useRawLocations


-(id)_bestCandidateSegmentForLocation:(id)arg0 transportType:(int)arg1 ;
-(id)init;
-(id)matchLocation:(id)arg0 forTransportType:(int)arg1 ;
-(void)dealloc;


@end


#endif