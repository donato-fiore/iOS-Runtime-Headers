// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EDTHREADQUERYUNDERLYINGHANDLERS_H
#define _EDTHREADQUERYUNDERLYINGHANDLERS_H

@class EMObjectID;

#import <Foundation/Foundation.h>

#import "EDInMemoryThreadQueryHandler.h"
#import "EDPrecomputedThreadQueryHandler.h"
#import "EDThreadMigrator.h"

@interface _EDThreadQueryUnderlyingHandlers : NSObject

@property (retain, nonatomic) EMObjectID *inMemoryObservationID; // ivar: _inMemoryObservationID
@property (retain, nonatomic) EDInMemoryThreadQueryHandler *inMemoryQueryHandler; // ivar: _inMemoryQueryHandler
@property (retain, nonatomic) EMObjectID *precomputedObservationID; // ivar: _precomputedObservationID
@property (retain, nonatomic) EDPrecomputedThreadQueryHandler *precomputedQueryHandler; // ivar: _precomputedQueryHandler
@property (retain, nonatomic) EDThreadMigrator *threadMigrator; // ivar: _threadMigrator


-(BOOL)_isCurrentObservationToken:(id)arg0 ;


@end


#endif