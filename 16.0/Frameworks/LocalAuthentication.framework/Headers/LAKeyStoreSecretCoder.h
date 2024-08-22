// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAKEYSTORESECRETCODER_H
#define LAKEYSTORESECRETCODER_H


#import <Foundation/Foundation.h>


@interface LAKeyStoreSecretCoder : NSObject



-(BOOL)_isCoderAvailable;
-(id)_generateNonce;
-(void)unwrapData:(id)arg0 completion:(id)arg1 ;
-(void)wrapData:(id)arg0 completion:(id)arg1 ;


@end


#endif