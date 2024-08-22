// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCALLINTERACTIONINPROCESSDATASOURCE_H
#define CHCALLINTERACTIONINPROCESSDATASOURCE_H

@class NSString;
@protocol CHCallInteractionDataSource, CHCallInteractionDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "CHNotifyObserver.h"

@interface CHCallInteractionInProcessDataSource : NSObject <CHCallInteractionDataSource>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) CHNotifyObserver *callInteractionObserver; // ivar: _callInteractionObserver
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<CHCallInteractionDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif