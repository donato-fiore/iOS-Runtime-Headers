// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCCC17MEDIAPLAYBACKCORE11QUEUELOADER6LOADER17LOADERURLDELEGATE_H
#define _TTCCC17MEDIAPLAYBACKCORE11QUEUELOADER6LOADER17LOADERURLDELEGATE_H

@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface _TtCCC17MediaPlaybackCore11QueueLoader6Loader17LoaderURLDelegate : NSObject <NSURLSessionDataDelegate>

 {
    ? database;
}




-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didCreateTask:(id)arg1 ;


@end


#endif