// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXBANNERSERVICES_H
#define AXBANNERSERVICES_H

@class NSString, AXUIClient;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface AXBannerServices : NSObject <AXUIClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AXUIClient *serverClient; // ivar: _serverClient
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dismissBanner;
-(void)presentBannerWithTitle:(id)arg0 message:(id)arg1 duration:(CGFloat)arg2 ;


@end


#endif