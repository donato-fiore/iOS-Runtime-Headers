// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYCIRCLECHANGEHANDLER_H
#define FAFAMILYCIRCLECHANGEHANDLER_H


#import <Foundation/Foundation.h>


@interface FAFamilyCircleChangeHandler : NSObject



+(void)_refetchFamilyWithContext:(id)arg0 completion:(id)arg1 ;
+(void)handleDidRepairFamilyWithCompletion:(id)arg0 ;
+(void)handleDidSetupFamilyWithCompletion:(id)arg0 ;
+(void)handleURLResponse:(id)arg0 ;


@end


#endif