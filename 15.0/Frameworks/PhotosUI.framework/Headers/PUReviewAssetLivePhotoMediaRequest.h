// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWASSETLIVEPHOTOMEDIAREQUEST_H
#define PUREVIEWASSETLIVEPHOTOMEDIAREQUEST_H

@protocol PUReviewAssetCancelableMediaRequest;

#import <Foundation/Foundation.h>


@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>



@property (readonly, nonatomic) int _liveRequestID; // ivar: __liveRequestID


-(id)initLivePhotoRequestID:(int)arg0 ;
-(void)cancelRequest;


@end


#endif