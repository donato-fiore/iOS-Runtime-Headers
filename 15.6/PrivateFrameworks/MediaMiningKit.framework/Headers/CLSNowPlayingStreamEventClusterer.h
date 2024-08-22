// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNOWPLAYINGSTREAMEVENTCLUSTERER_H
#define CLSNOWPLAYINGSTREAMEVENTCLUSTERER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CLSNowPlayingStreamEventClusteringParameters.h"

@interface CLSNowPlayingStreamEventClusterer : NSObject

@property (readonly, nonatomic) CLSNowPlayingStreamEventClusteringParameters *clusteringParameters; // ivar: _clusteringParameters
@property (readonly, nonatomic) NSArray *sessions; // ivar: _sessions


-(id)_dbScanClusterEvents:(id)arg0 ;
-(id)_populateSessionsWithClusters:(id)arg0 ;
-(id)init;
-(id)initWithClusteringParameters:(id)arg0 ;
-(void)clusterEvents:(id)arg0 ;
-(void)dbScanClusterEvents:(id)arg0 ;
-(void)naiveClusterEvents:(id)arg0 ;


@end


#endif