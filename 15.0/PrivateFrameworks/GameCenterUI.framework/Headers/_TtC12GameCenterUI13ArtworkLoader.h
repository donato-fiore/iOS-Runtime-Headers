// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI13ARTWORKLOADER_H
#define _TTC12GAMECENTERUI13ARTWORKLOADER_H

@class SwiftObject;
@protocol GKImageRequestDelegate;



@interface _TtC12GameCenterUI13ArtworkLoader : SwiftObject <GKImageRequestDelegate>

 {
    ? resourceLoader;
    ? accessQueue;
    ? completionHandlers;
    ? requestCompletionMap;
    ? isOccluded;
}




-(void)imageRequest:(id)arg0 didFailWithError:(id)arg1 ;
-(void)imageRequest:(id)arg0 didLoadImage:(id)arg1 ;


@end


#endif