// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGONDISKMANAGER_H
#define PGONDISKMANAGER_H



#import "PGManager.h"

@interface PGOnDiskManager : PGManager



+(Class)graphClass;
-(BOOL)requiresReadOnly;
-(void)closePersistentStore;


@end


#endif