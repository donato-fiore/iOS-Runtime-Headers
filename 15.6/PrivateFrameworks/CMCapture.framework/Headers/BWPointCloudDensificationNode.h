// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWPOINTCLOUDDENSIFICATIONNODE_H
#define BWPOINTCLOUDDENSIFICATIONNODE_H

@class ADJasperColorV2Executor;


#import "BWNode.h"
#import "BWPointCloudDensificationNodeConfiguration.h"

@interface BWPointCloudDensificationNode : BWNode {
    ADJasperColorV2Executor *_executor;
    BWPointCloudDensificationNodeConfiguration *_configuration;
}




+(void)initialize;
-(id)initWithConfiguration:(id)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif