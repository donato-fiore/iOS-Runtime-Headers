// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSERVICEFACTORY_H
#define CKVSERVICEFACTORY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVServiceFactory : NSObject

@property (readonly, nonatomic) CKVIndexManager *indexManager; // ivar: _indexManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // ivar: _serviceQueue
@property (readonly, nonatomic) CKVSettings *settings; // ivar: _settings


-(id)init;
-(id)initWithQueue:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 ;


@end


#endif