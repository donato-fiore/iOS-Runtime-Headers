// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTINPUTPAYLOADCONTROLLER_H
#define UITEXTINPUTPAYLOADCONTROLLER_H

@class NSArray;
@protocol UITextInputPayloadDelegate;

#import <Foundation/Foundation.h>


@interface UITextInputPayloadController : NSObject

@property (weak, nonatomic) NSObject<UITextInputPayloadDelegate> *payloadDelegate; // ivar: _payloadDelegate
@property (copy, nonatomic) NSArray *supportedPayloadIds; // ivar: _supportedPayloadIds


+(id)sharedInstance;
+(void)releaseSharedInstance;


@end


#endif