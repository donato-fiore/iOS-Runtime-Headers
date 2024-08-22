// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKENROLLPEARLOPERATION_H
#define BKENROLLPEARLOPERATION_H

@protocol BKEnrollPearlOperationDelegate;


#import "BKEnrollOperation.h"
#import "BKIdentity.h"

@interface BKEnrollPearlOperation : BKEnrollOperation

@property (retain, nonatomic) BKIdentity *augmentedIdentity; // ivar: _augmentedIdentity
@property (nonatomic) BOOL clientToComplete; // ivar: _clientToComplete
@property (weak, nonatomic) NSObject<BKEnrollPearlOperationDelegate> *delegate;
@property (nonatomic) NSInteger enrollmentType; // ivar: _enrollmentType


-(BOOL)completeWithError:(*id)arg0 ;
-(BOOL)resumeWithError:(*id)arg0 ;
-(BOOL)startWithError:(*id)arg0 ;
-(BOOL)suspendWithError:(*id)arg0 ;
-(id)enrollResultInfoWithServerIdentity:(id)arg0 details:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)optionsDictionaryWithError:(*id)arg0 ;
-(void)enrollFeedback:(id)arg0 client:(NSUInteger)arg1 ;
-(void)enrollUpdate:(id)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;


@end


#endif