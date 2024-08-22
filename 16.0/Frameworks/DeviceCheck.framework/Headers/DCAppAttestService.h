// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCAPPATTESTSERVICE_H
#define DCAPPATTESTSERVICE_H


#import <Foundation/Foundation.h>


@interface DCAppAttestService : NSObject

@property (readonly, getter=isSupported) BOOL supported;


+(id)sharedService;
-(BOOL)_isSupportedReturningError:(*id)arg0 ;
-(id)_loadAppUUID;
-(id)_rewrapAsDCError:(id)arg0 ;
-(void)_saveAppUUID:(id)arg0 ;
-(void)attestKey:(id)arg0 clientDataHash:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateAssertion:(id)arg0 clientDataHash:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateKeyWithCompletionHandler:(id)arg0 ;


@end


#endif