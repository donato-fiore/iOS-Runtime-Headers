// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APXPCLISTENERMANAGER_H
#define APXPCLISTENERMANAGER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface APXPCListenerManager : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *listeners; // ivar: _listeners
@property (readonly) Class superclass;


+(void)addDelegate:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif