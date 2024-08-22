// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSRECORDDAEMONCONTROLLER_H
#define TPSRECORDDAEMONCONTROLLER_H

@class NSString;
@protocol _TPSXPCExportable;

#import <Foundation/Foundation.h>

#import "_TPSXPCConnection.h"

@interface TPSRecordDaemonController : NSObject <_TPSXPCExportable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _TPSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)exportedInterface;
-(id)remoteInterface;
-(void)_destroyXPCConnection;
-(void)connectionInterrupted;
-(void)connectionInvalidated;


@end


#endif