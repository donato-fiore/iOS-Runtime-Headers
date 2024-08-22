// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKCOLLECTIONSTORAGEREFINER_H
#define MKCOLLECTIONSTORAGEREFINER_H

@class GEOURLCollectionStorage;

#import <Foundation/Foundation.h>


@interface MKCollectionStorageRefiner : NSObject {
    os_unfair_lock_s _lock;
    GEOURLCollectionStorage *_collectionStorage;
}




-(id)initWithCollectionStorage:(id)arg0 ;
-(id)initWithCollectionURL:(id)arg0 ;
-(void)_sharedInitWithCollectionStorage:(id)arg0 ;
-(void)fetchMapItems:(id)arg0 ;
// -(void)fetchMapItems:(id)arg0 traits:(unk)arg1  ;


@end


#endif