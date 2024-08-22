// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOURLMANIFESTLISTENERCALLBACKWITHQUEUE_H
#define _GEOURLMANIFESTLISTENERCALLBACKWITHQUEUE_H

@class NSString;
@protocol _GEOURLManifestListenerCallback, OS_dispatch_queue, OS_voucher;

#import <Foundation/Foundation.h>


@interface _GEOURLManifestListenerCallbackWithQueue : NSObject <_GEOURLManifestListenerCallback>

 {
    id *_handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    unsigned int _qos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)performHandler:(BOOL)arg0 ;


@end


#endif