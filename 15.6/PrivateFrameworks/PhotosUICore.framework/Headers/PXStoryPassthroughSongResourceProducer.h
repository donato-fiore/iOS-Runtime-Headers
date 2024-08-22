// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYPASSTHROUGHSONGRESOURCEPRODUCER_H
#define PXSTORYPASSTHROUGHSONGRESOURCEPRODUCER_H

@protocol PXStorySongResourceProducer, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughSongResourceProducer : NSObject <PXStorySongResourceProducer>



@property (nonatomic) NSUInteger logContext; // ivar: logContext
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource


-(id)init;
-(id)initWithSongResource:(id)arg0 ;
-(id)requestSongResourceWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif