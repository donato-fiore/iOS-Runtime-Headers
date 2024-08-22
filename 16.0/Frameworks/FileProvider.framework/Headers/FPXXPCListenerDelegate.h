// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPXXPCLISTENERDELEGATE_H
#define FPXXPCLISTENERDELEGATE_H

@class NSString, NSXPCInterface;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "FPXExtensionContext.h"

@interface FPXXPCListenerDelegate : NSObject <NSXPCListenerDelegate>



@property (retain, nonatomic) FPXExtensionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCInterface *interface; // ivar: _interface
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;


@end


#endif