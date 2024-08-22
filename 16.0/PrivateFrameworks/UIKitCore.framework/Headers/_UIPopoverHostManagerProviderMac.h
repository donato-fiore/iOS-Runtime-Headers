// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERHOSTMANAGERPROVIDERMAC_H
#define _UIPOPOVERHOSTMANAGERPROVIDERMAC_H

@class NSString;
@protocol _UIPopoverHostManagerProvider;

#import <Foundation/Foundation.h>


@interface _UIPopoverHostManagerProviderMac : NSObject <_UIPopoverHostManagerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_defaultsUseNSPopover;
+(id)managerForPresentationController:(id)arg0 ;
+(id)sharedPopoverManager;


@end


#endif