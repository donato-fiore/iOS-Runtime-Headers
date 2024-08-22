// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPORTRAITREQUESTSERVERDELEGATE_H
#define SGPORTRAITREQUESTSERVERDELEGATE_H

@class _PASLock, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface SGPortraitRequestServerDelegate : NSObject <NSXPCListenerDelegate>

 {
    id *_makeHandler;
    _PASLock *_handlerCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMakeHandler:(id)arg0 ;


@end


#endif