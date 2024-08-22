// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDELEGATECALLER_H
#define HMDELEGATECALLER_H


#import <Foundation/Foundation.h>


@interface HMDelegateCaller : NSObject



+(id)delegateCallerWithOperationQueue:(id)arg0 ;
-(id)_localizedError:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
// -(void)callCompletion:(id)arg0 actionSet:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 array:(unk)arg1  ;
// -(void)callCompletion:(id)arg0 array:(unk)arg1 additionalAccessoryInfo:(id)arg2 error:(id)arg3  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 array:(id)arg2  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 boolValue:(id)arg2 array:(BOOL)arg3  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 dictionary:(id)arg2  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 mediaSystem:(id)arg2  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 obj:(id)arg2  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 proxiedDevice:(id)arg2  ;
// -(void)callCompletion:(id)arg0 error:(unk)arg1 snapshot:(id)arg2  ;
// -(void)callCompletion:(id)arg0 errorString:(unk)arg1  ;
// -(void)callCompletion:(id)arg0 home:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 invitations:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 isUsingHomeKit:(unk)arg1 isUsingCloudServices:(BOOL)arg2 error:(BOOL)arg3  ;
// -(void)callCompletion:(id)arg0 obj:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 room:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 service:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 serviceGroup:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 user:(unk)arg1 error:(id)arg2  ;
// -(void)callCompletion:(id)arg0 value:(unk)arg1 conflictName:(BOOL)arg2 error:(id)arg3  ;
// -(void)callCompletion:(id)arg0 value:(unk)arg1 error:(BOOL)arg2  ;
// -(void)callCompletion:(id)arg0 zone:(unk)arg1 error:(id)arg2  ;
-(void)invokeBlock:(id)arg0 ;


@end


#endif