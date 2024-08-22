// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION22FAIRPLAYKEYLOADINGMOCK_H
#define _TTC18PODCASTSFOUNDATION22FAIRPLAYKEYLOADINGMOCK_H

@class SwiftObject;
@protocol PFFairPlayKeyLoading;



@interface _TtC18PodcastsFoundation22FairPlayKeyLoadingMock : SwiftObject <PFFairPlayKeyLoading>

 {
    ? createSessionHandler;
    ? startKeyRequestHandler;
    ? renewKeyRequestHandler;
    ? renewKeyRequestsHandler;
    ? stopKeyRequestAssetHandler;
    ? stopKeyRequestSessionHandler;
}




-(void)createSessionWithAsset:(id)arg0 completion:(id)arg1 ;
-(void)renewKeyRequestWithAsset:(id)arg0 completion:(id)arg1 ;
-(void)renewKeyRequestsWithAssets:(id)arg0 completion:(id)arg1 ;
-(void)startKeyRequestWithSession:(id)arg0 completion:(id)arg1 ;
-(void)stopKeyRequestWithAsset:(id)arg0 completion:(id)arg1 ;
-(void)stopKeyRequestWithSession:(id)arg0 completion:(id)arg1 ;


@end


#endif