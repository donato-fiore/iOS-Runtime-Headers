// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILOADINGHANDLERIMAGELOADER_H
#define _UILOADINGHANDLERIMAGELOADER_H

@class UIImageLoader;
@protocol OS_dispatch_queue;



@interface _UILoadingHandlerImageLoader : UIImageLoader {
    NSObject<OS_dispatch_queue> *_loadingQueue;
    id *_loadingHandler;
}




-(id)initWithLoadingQueue:(id)arg0 handler:(id)arg1 ;
-(void)_really_loadImage:(id)arg0 ;


@end


#endif