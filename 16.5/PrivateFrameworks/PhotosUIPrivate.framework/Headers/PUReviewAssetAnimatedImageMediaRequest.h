// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUREVIEWASSETANIMATEDIMAGEMEDIAREQUEST_H
#define PUREVIEWASSETANIMATEDIMAGEMEDIAREQUEST_H

@protocol PUReviewAssetCancelableMediaRequest;

#import <Foundation/Foundation.h>


@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>



@property (readonly, nonatomic) NSInteger _animatedRequestID; // ivar: __animatedRequestID


-(id)initWithAnimatedImageRequestID:(NSInteger)arg0 ;
-(void)cancelRequest;


@end


#endif