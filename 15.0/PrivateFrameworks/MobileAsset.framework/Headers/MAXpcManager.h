// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAXPCMANAGER_H
#define MAXPCMANAGER_H


#import <Foundation/Foundation.h>


@interface MAXpcManager : NSObject



-(id)initWithServiceName:(id)arg0 callbackQueue:(id)arg1 ;
-(id)sendSync:(id)arg0 ;
// -(void)attachProgressHandler:(id)arg0 assetId:(id)arg1 callBack:(id)arg2 withPurpose:(unk)arg3  ;
-(void)clearConnection:(id)arg0 ;
-(void)dealloc;
-(void)ensureConnection;
// -(void)sendAsync:(id)arg0 clientHandler:(id)arg1 taskDescriptor:(unk)arg2  ;
-(void)setClientConnectionHandler;
-(void)setClientName:(id)arg0 ;


@end


#endif