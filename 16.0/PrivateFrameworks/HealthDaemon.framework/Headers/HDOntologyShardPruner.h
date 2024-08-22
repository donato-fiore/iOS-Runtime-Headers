// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYSHARDPRUNER_H
#define HDONTOLOGYSHARDPRUNER_H

@protocol HDCacheDeleteProvider;

#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyShardPruner : NSObject <HDCacheDeleteProvider>



@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


-(BOOL)pruneOntologyWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSInteger)purgeSpaceForUrgency:(int)arg0 ;
-(NSInteger)purgeableSpaceForUrgency:(int)arg0 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;


@end


#endif