// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCLOUDKITKEYVALUESTORE_H
#define IDSCLOUDKITKEYVALUESTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSCKContainer.h"

@interface IDSCloudKitKeyValueStore : NSObject

@property (retain, nonatomic) IDSCKContainer *container; // ivar: _container
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithContainer:(id)arg0 queue:(id)arg1 ;
-(void)fetchDataForKey:(id)arg0 completion:(id)arg1 ;
-(void)fetchObjectForKey:(id)arg0 completion:(id)arg1 ;
-(void)setData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;


@end


#endif