// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION40FAIRPLAYTEMPORARYKEYSTORAGEPROVIDINGMOCK_H
#define _TTC18PODCASTSFOUNDATION40FAIRPLAYTEMPORARYKEYSTORAGEPROVIDINGMOCK_H

@class SwiftObject;
@protocol PFFairPlayTemporaryKeyStorageProviding;



@interface _TtC18PodcastsFoundation40FairPlayTemporaryKeyStorageProvidingMock : SwiftObject <PFFairPlayTemporaryKeyStorageProviding>

 {
    ? createDirectoryHandler;
    ? removeDirectoryHandler;
    ? directoryExistsHandler;
    ? directoryLocationHandler;
}




-(BOOL)directoryExistsFor:(NSInteger)arg0 ;
-(BOOL)removeDirectoryFor:(NSInteger)arg0 error:(*id)arg1 ;
-(id)createDirectoryFor:(NSInteger)arg0 error:(*id)arg1 ;
-(id)directoryLocationFor:(NSInteger)arg0 ;


@end


#endif