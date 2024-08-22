// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RERESOURCEFETCHSERVER_H
#define RERESOURCEFETCHSERVER_H

@class NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface REResourceFetchServer : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resourceFetchManager; // ivar: _resourceFetchManager
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithResourceFetchManager:(*void)arg0 ;
-(void)invalidate;


@end


#endif