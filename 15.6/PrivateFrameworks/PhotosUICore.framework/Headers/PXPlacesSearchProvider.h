// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESSEARCHPROVIDER_H
#define PXPLACESSEARCHPROVIDER_H

@class PXPlacesSnapshotFactory;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPlacesSearchProvider : NSObject

@property (retain, nonatomic) PXPlacesSnapshotFactory *factory; // ivar: _factory
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)init;
-(void)requestMapSnapshotForQuery:(id)arg0 ofSize:(struct CGSize )arg1 traitCollectionForSnapshot:(id)arg2 completion:(id)arg3 ;


@end


#endif