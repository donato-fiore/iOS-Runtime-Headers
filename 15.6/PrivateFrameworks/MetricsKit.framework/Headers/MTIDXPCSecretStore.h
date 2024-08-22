// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTIDXPCSECRETSTORE_H
#define MTIDXPCSECRETSTORE_H

@class NSString, NSXPCConnection;
@protocol MTIDSecretStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTIDXPCSecretStore : NSObject <MTIDSecretStore>

 {
    CGFloat _idleCountDown;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)debugInfo;
-(id)init;
-(id)maintainSchemes:(id)arg0 options:(id)arg1 ;
-(id)newXPCConnection;
-(id)resetSchemes:(id)arg0 options:(id)arg1 ;
-(id)secretForScheme:(id)arg0 options:(id)arg1 ;
-(id)setupXPCConnection;
-(id)syncForSchemes:(id)arg0 options:(id)arg1 ;
-(void)clearLocalData;


@end


#endif