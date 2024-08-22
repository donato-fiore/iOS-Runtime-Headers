// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNXPCLISTENERDELEGATE_H
#define CNXPCLISTENERDELEGATE_H

@class Protocol, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate>

 {
    id *_exportedObject;
    Protocol *_exportedInterfaceProtocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithWithExportedObject:(id)arg0 exportedInterfaceProtocol:(id)arg1 ;


@end


#endif