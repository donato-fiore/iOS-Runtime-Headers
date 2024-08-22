// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLMETADATASTORE_H
#define BLMETADATASTORE_H


#import <Foundation/Foundation.h>

#import "BLServiceProxy.h"

@interface BLMetadataStore : NSObject

@property (readonly, nonatomic) BLServiceProxy *serviceProxy; // ivar: _serviceProxy


-(BOOL)removeRacGUIDForStoreID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setRacGUID:(id)arg0 forStoreID:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(void)racGUIDForStoreID:(NSInteger)arg0 result:(id)arg1 ;


@end


#endif