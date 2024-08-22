// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSEGMENTATIONITEMLOADER_H
#define PUSEGMENTATIONITEMLOADER_H

@class PISegmentationLoader;



@interface PUSegmentationItemLoader : PISegmentationLoader



+(id)segmentationQueue;
+(void)loadItemFromAsset:(id)arg0 completion:(id)arg1 ;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithParallaxAsset:(id)arg0 ;
-(void)loadSegmentationItemWithCompletion:(id)arg0 ;


@end


#endif