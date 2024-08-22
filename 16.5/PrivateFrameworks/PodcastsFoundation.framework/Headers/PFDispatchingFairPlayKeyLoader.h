// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDISPATCHINGFAIRPLAYKEYLOADER_H
#define PFDISPATCHINGFAIRPLAYKEYLOADER_H

@protocol PFFairPlayKeyLoading;

#import <Foundation/Foundation.h>


@interface PFDispatchingFairPlayKeyLoader : NSObject <PFFairPlayKeyLoading>

 {
    ? wrappedInstance;
    ? responseQueue;
}




+(id)receiveOn:(id)arg0 loader:(id)arg1 ;
-(id)init;
-(void)createSessionWithAsset:(id)arg0 completion:(id)arg1 ;
-(void)renewKeyRequestWithAsset:(id)arg0 completion:(id)arg1 ;
-(void)renewKeyRequestsWithAssets:(id)arg0 completion:(id)arg1 ;
-(void)startKeyRequestWithSession:(id)arg0 completion:(id)arg1 ;
-(void)stopKeyRequestWithAsset:(id)arg0 completion:(id)arg1 ;
-(void)stopKeyRequestWithSession:(id)arg0 completion:(id)arg1 ;


@end


#endif