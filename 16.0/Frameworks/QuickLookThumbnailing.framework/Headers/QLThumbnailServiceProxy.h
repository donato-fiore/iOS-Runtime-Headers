// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILSERVICEPROXY_H
#define QLTHUMBNAILSERVICEPROXY_H

@class NSXPCConnection;
@protocol QLThumbnailsInterface, QLThumbnailAdditionIndexInterface;

#import <Foundation/Foundation.h>


@interface QLThumbnailServiceProxy : NSObject {
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}




+(id)interface;
+(id)sharedInstance;
+(id)sharedInstanceWithError:(*id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)indexProxy;
-(id)initWithError:(*id)arg0 ;
-(void)askThumbnailAdditionIndex:(id)arg0 ;
-(void)dealloc;
-(void)touchOrAddThumbnailAddition:(id)arg0 forURL:(id)arg1 ;
-(void)updateLastHitDateOfAddition:(id)arg0 onPhysicalURL:(id)arg1 ;


@end


#endif