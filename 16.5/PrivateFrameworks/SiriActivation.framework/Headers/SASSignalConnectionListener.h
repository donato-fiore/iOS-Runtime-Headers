// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASSIGNALCONNECTIONLISTENER_H
#define SASSIGNALCONNECTIONLISTENER_H

@class NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>


@interface SASSignalConnectionListener : NSObject <BSServiceConnectionListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(id)new;
-(id)_init;
-(id)init;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif