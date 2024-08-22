// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCE17PREVIEWSOSSUPPORTCSO25UVBSPIPESERVICECONNECTIONP33_6F6228FEB9D698677456E0B4E0512AD215INTERFACETARGET_H
#define _TTCE17PREVIEWSOSSUPPORTCSO25UVBSPIPESERVICECONNECTIONP33_6F6228FEB9D698677456E0B4E0512AD215INTERFACETARGET_H

@protocol UVBSPipeServiceProtocol;

#import <Foundation/Foundation.h>


@interface _TtCE17PreviewsOSSupportCSo25UVBSPipeServiceConnectionP33_6F6228FEB9D698677456E0B4E0512AD215InterfaceTarget : NSObject <UVBSPipeServiceProtocol>

 {
    ? connection;
    ? receiver;
}




-(id)init;
-(void)sendEncodedEvent:(id)arg0 ;
-(void)sendEncodedEvent:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif