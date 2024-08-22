// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSEXTENSIONGLOBALSTATE_H
#define _MSEXTENSIONGLOBALSTATE_H

@protocol _MSMessageComposeExtensionImplProtocol;

#import <Foundation/Foundation.h>


@interface _MSExtensionGlobalState : NSObject

@property (retain, nonatomic) NSObject<_MSMessageComposeExtensionImplProtocol> *activeExtensionContext; // ivar: _activeExtensionContext


+(id)sharedInstance;


@end


#endif