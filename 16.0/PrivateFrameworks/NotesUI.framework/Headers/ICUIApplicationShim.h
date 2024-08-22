// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUIAPPLICATIONSHIM_H
#define ICUIAPPLICATIONSHIM_H

@class NSString, UIWindow;
@protocol ICUIApplicationShim, ICUIApplicationShimDelegate;

#import <Foundation/Foundation.h>


@interface ICUIApplicationShim : NSObject <ICUIApplicationShim>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<ICUIApplicationShimDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIWindow *keyWindow;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isQuickNoteSessionActive;
-(BOOL)isSecureScreenShowing;
-(void)beginReceivingRemoteControlEvents;
-(void)endReceivingRemoteControlEvents;


@end


#endif