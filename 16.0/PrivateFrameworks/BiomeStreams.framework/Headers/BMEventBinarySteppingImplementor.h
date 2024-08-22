// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMEVENTBINARYSTEPPINGIMPLEMENTOR_H
#define BMEVENTBINARYSTEPPINGIMPLEMENTOR_H

@class NSString;
@protocol BMEventBinaryStepping;


#import "BMEventBase.h"

@interface BMEventBinarySteppingImplementor : BMEventBase <BMEventBinaryStepping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStarting) BOOL starting; // ivar: starting
@property (readonly) Class superclass;


-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif