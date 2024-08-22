// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYMERCURYZIPTSVPRUNER_H
#define HDONTOLOGYMERCURYZIPTSVPRUNER_H


#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyMercuryZipTSVPruner : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


-(NSInteger)pruneEntries:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;


@end


#endif