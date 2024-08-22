// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTMUSICPROCESSOR_H
#define PGGRAPHINGESTMUSICPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)nowPlayingStreamConverterOptions;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_ingestStreamEventSession:(id)arg0 graph:(id)arg1 performerNodesByName:(id)arg2 ;
-(void)processMusicForGraph:(id)arg0 progressBlock:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif