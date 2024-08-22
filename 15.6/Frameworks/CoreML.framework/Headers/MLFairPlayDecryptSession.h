// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLFAIRPLAYDECRYPTSESSION_H
#define MLFAIRPLAYDECRYPTSESSION_H

@class NSString, NSXPCConnection;
@protocol CoreMLModelSecurityProtocol;

#import <Foundation/Foundation.h>


@interface MLFairPlayDecryptSession : NSObject

@property (copy, nonatomic) NSString *modelPath; // ivar: _modelPath
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<CoreMLModelSecurityProtocol> *xpcProxy; // ivar: _xpcProxy


+(id)decryptSessionForModelAtPath:(id)arg0 keyBlob:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif