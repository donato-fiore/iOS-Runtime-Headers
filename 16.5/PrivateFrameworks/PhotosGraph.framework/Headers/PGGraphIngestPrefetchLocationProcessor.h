// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTPREFETCHLOCATIONPROCESSOR_H
#define PGGRAPHINGESTPREFETCHLOCATIONPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPrefetchLocationProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)prefetchLocationsWithRegions:(id)arg0 loggingConnection:(id)arg1 progressBlock:(id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)regionsWithMoments:(id)arg0 progressBlock:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif