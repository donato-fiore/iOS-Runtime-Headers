// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTSOCIALGROUPSPROCESSOR_H
#define PGGRAPHINGESTSOCIALGROUPSPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestSocialGroupsProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(void)processSocialGroups:(BOOL)arg0 graph:(id)arg1 progressBlock:(id)arg2 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif