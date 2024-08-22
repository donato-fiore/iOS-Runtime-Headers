// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCURATIONDEBUGCLUSTER_H
#define CLSCURATIONDEBUGCLUSTER_H

@class NSSet, NSString;


#import "CLSCurationDebugObject.h"

@interface CLSCurationDebugCluster : CLSCurationDebugObject {
    NSSet *_debugClusters;
}


@property (readonly) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSSet *unclusteredDebugItems; // ivar: _unclusteredDebugItems


-(id)allDebugItems;
-(id)dictionaryRepresentation;
-(id)initWithDebugItems:(id)arg0 reason:(id)arg1 ;
-(id)timestamp;
-(void)addDebugClusters:(id)arg0 ;
-(void)resetWithReason:(id)arg0 agent:(id)arg1 stage:(id)arg2 ;
-(void)setDebugClusters:(id)arg0 ;


@end


#endif