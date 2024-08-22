// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUIIMAGEPROVIDER_H
#define SFUIIMAGEPROVIDER_H

@class NSCache, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFUIImageProvider : NSObject {
    int _nextRequestID;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // ivar: _fetchQueue
@property (readonly, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (readonly, nonatomic) NSMutableDictionary *requestsForIdentifier; // ivar: _requestsForIdentifier
@property (readonly, nonatomic) NSMutableDictionary *requestsForRequestID; // ivar: _requestsForRequestID


-(id)init;
-(int)nextRequestID;
-(void)cancelImageRequest:(int)arg0 ;
-(void)deliverImage:(id)arg0 identifier:(id)arg1 placeholder:(BOOL)arg2 error:(id)arg3 ;
-(void)scheduleImageRequest:(id)arg0 ;


@end


#endif