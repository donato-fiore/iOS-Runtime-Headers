// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKAPSCONNECTIONDELEGATE_H
#define _WKAPSCONNECTIONDELEGATE_H

@class NSString;
@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>


@interface _WKAPSConnectionDelegate : NSObject <APSConnectionDelegate>

 {
    WeakPtr<WebPushD::ApplePushServiceConnection, WTF::DefaultWeakPtrImpl> _connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(*void)arg0 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;


@end


#endif