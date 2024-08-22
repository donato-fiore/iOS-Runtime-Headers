// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDNONACCEPTINGSERVER_H
#define EDNONACCEPTINGSERVER_H

@class NSString, NSMutableArray;
@protocol NSXPCListenerDelegate, EFLoggable;

#import <Foundation/Foundation.h>


@interface EDNonAcceptingServer : NSObject <NSXPCListenerDelegate, EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *listeners; // ivar: _listeners
@property (readonly) Class superclass;


+(id)log;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachServiceNames:(id)arg0 ;


@end


#endif