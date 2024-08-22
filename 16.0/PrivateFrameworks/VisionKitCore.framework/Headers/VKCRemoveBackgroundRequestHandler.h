// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCREMOVEBACKGROUNDREQUESTHANDLER_H
#define VKCREMOVEBACKGROUNDREQUESTHANDLER_H

@class MADService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VKCRemoveBackgroundRequestHandler : NSObject {
    MADService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)isSupported;
+(CGFloat)maxAspectRatio;
+(CGFloat)maxLength;
+(CGFloat)maxResolution;
+(CGFloat)minAspectRatio;
-(BOOL)isValidRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)cancelAllRequests;
-(void)cancelRequest:(id)arg0 ;
-(void)performRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif