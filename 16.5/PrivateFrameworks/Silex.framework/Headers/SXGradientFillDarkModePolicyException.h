// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXGRADIENTFILLDARKMODEPOLICYEXCEPTION_H
#define SXGRADIENTFILLDARKMODEPOLICYEXCEPTION_H

@class NSString;
@protocol SXDarkModePolicyException;

#import <Foundation/Foundation.h>


@interface SXGradientFillDarkModePolicyException : NSObject <SXDarkModePolicyException>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)shouldApplyDarkModeToComponentStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;


@end


#endif