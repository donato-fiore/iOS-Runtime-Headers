// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPERSISTENCECONFIGURATION_H
#define ICPERSISTENCECONFIGURATION_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface ICPersistenceConfiguration : NSObject

@property (retain, nonatomic) NSManagedObjectContext *legacyBackgroundContext; // ivar: _legacyBackgroundContext
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext; // ivar: _legacyViewContext
@property (retain, nonatomic) NSManagedObjectContext *modernBackgroundContext; // ivar: _modernBackgroundContext
@property (retain, nonatomic) NSManagedObjectContext *modernViewContext; // ivar: _modernViewContext




@end


#endif