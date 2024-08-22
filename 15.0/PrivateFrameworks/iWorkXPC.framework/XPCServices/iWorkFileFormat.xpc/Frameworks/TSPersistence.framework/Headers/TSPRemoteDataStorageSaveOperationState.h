// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPREMOTEDATASTORAGESAVEOPERATIONSTATE_H
#define TSPREMOTEDATASTORAGESAVEOPERATIONSTATE_H

@protocol TSPDataStorage;

#import <Foundation/Foundation.h>


@interface TSPRemoteDataStorageSaveOperationState : NSObject

@property (readonly, nonatomic) NSUInteger changeCount; // ivar: _changeCount
@property (readonly, nonatomic) NSObject<TSPDataStorage> *packageDataStorage; // ivar: _packageDataStorage


-(id)initWithChangeCount:(NSUInteger)arg0 packageDataStorage:(id)arg1 ;


@end


#endif