// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTBABYPROCESSOR_H
#define PGGRAPHINGESTBABYPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestBabyProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)homeOwnerPersonNodesWithMomentNode:(id)arg0 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_babiesInGraph:(id)arg0 ;
-(id)babySceneNodeInGraph:(id)arg0 ;
-(void)_removeAllBabyNodesInGraph:(id)arg0 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif