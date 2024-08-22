// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MDLPROBECLUSTER_H
#define _MDLPROBECLUSTER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _MDLProbeCluster : NSObject {
    ? _centroid;
}


@property ? centroid;
@property (retain) NSMutableSet *probes; // ivar: _probes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCluster:(id)arg0 ;
-(void)calculateCentroidNotIncludingSamplesinArray:(id)arg0 ;


@end


#endif