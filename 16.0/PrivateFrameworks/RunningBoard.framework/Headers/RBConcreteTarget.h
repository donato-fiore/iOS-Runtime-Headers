// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBCONCRETETARGET_H
#define RBCONCRETETARGET_H

@class NSString, RBSProcessIdentity;
@protocol NSCopying, RBConcreteTargeting;

#import <Foundation/Foundation.h>

#import "RBProcess.h"

@interface RBConcreteTarget : NSObject <NSCopying, RBConcreteTargeting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBProcess *process;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystem) BOOL system;


+(id)systemTarget;
+(id)targetWithIdentity:(id)arg0 environment:(id)arg1 ;
+(id)targetWithProcess:(id)arg0 environment:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createRBSTarget;


@end


#endif