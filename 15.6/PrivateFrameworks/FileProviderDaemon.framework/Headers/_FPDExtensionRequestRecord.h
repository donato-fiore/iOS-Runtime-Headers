// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPDEXTENSIONREQUESTRECORD_H
#define _FPDEXTENSIONREQUESTRECORD_H

@class FPXPCAutomaticErrorProxy, NSDate;

#import <Foundation/Foundation.h>


@interface _FPDExtensionRequestRecord : NSObject

@property (weak) FPXPCAutomaticErrorProxy *proxy; // ivar: _proxy
@property (nonatomic) SEL selector; // ivar: _selector
@property (nonatomic) NSDate *timeout; // ivar: _timeout


-(id)description;


@end


#endif