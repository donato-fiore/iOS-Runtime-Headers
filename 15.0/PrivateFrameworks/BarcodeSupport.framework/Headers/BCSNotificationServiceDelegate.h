// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSNOTIFICATIONSERVICEDELEGATE_H
#define BCSNOTIFICATIONSERVICEDELEGATE_H

@class NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface BCSNotificationServiceDelegate : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;


@end


#endif