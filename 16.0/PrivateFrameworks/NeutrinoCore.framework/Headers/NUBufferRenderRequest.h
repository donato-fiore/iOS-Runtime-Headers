// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUBUFFERRENDERREQUEST_H
#define NUBUFFERRENDERREQUEST_H

@protocol NUMutableBufferImage;


#import "NUImageRenderRequest.h"

@interface NUBufferRenderRequest : NUImageRenderRequest

@property NSObject<NUMutableBufferImage> *targetBufferImage;


-(id)newRenderJob;
-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif