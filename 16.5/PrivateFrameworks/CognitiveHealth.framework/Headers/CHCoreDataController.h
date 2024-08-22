// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCOREDATACONTROLLER_H
#define CHCOREDATACONTROLLER_H

@class NSPersistentContainer;

#import <Foundation/Foundation.h>


@interface CHCoreDataController : NSObject

@property (readonly) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer


-(void)addPersistentStoreFromDatabase;


@end


#endif