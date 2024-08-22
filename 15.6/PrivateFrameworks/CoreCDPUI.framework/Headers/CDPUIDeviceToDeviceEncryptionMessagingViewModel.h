// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONMESSAGINGVIEWMODEL_H
#define CDPUIDEVICETODEVICEENCRYPTIONMESSAGINGVIEWMODEL_H

@class NSString;
@protocol CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol;

#import <Foundation/Foundation.h>

#import "CDPUIDeviceToDeviceEncryptionFlowContext.h"

@interface CDPUIDeviceToDeviceEncryptionMessagingViewModel : NSObject <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>



@property (readonly) CDPUIDeviceToDeviceEncryptionFlowContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasLocalSecret; // ivar: _hasLocalSecret
@property (readonly) NSUInteger hash;
@property (readonly) BOOL is2FA; // ivar: _is2FA
@property (readonly) Class superclass;


-(id)cancelTitle;
-(id)continueTitle;
-(id)initWithContext:(id)arg0 is2FA:(BOOL)arg1 hasLocalSecret:(BOOL)arg2 ;
-(id)message;
-(id)title;


@end


#endif