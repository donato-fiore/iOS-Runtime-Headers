// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKENROLLOPERATION_H
#define BKENROLLOPERATION_H

@class NSData;
@protocol BKEnrollOperationDelegate;


#import "BKOperation.h"

@interface BKEnrollOperation : BKOperation

@property (copy, nonatomic) NSData *credentialSet; // ivar: _credentialSet
@property (weak, nonatomic) NSObject<BKEnrollOperationDelegate> *delegate;
@property (nonatomic) unsigned int userID; // ivar: _userID


-(id)enrollResultInfoWithServerIdentity:(id)arg0 details:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)optionsDictionaryWithError:(*id)arg0 ;
-(void)enrollFeedback:(id)arg0 client:(NSUInteger)arg1 ;
-(void)enrollResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)enrollUpdate:(id)arg0 client:(NSUInteger)arg1 ;
-(void)startBioOperation:(BOOL)arg0 reply:(id)arg1 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;


@end


#endif