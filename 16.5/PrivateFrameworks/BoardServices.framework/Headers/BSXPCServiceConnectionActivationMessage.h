// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSXPCSERVICECONNECTIONACTIVATIONMESSAGE_H
#define BSXPCSERVICECONNECTIONACTIVATIONMESSAGE_H

@class NSString;
@protocol BSXPCServiceConnectionHandshake, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BSXPCServiceConnectionMessage.h"

@interface BSXPCServiceConnectionActivationMessage : NSObject <BSXPCServiceConnectionHandshake, BSInvalidatable>

 {
    BSXPCServiceConnectionMessage *_message;
    int _invalid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)invalidate;
-(void)sendIfNecessary;


@end


#endif