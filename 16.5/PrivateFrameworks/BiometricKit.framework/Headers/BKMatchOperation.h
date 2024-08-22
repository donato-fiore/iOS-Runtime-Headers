// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKMATCHOPERATION_H
#define BKMATCHOPERATION_H

@class NSData, NSArray, NSNumber;
@protocol BKMatchOperationDelegate;


#import "BKOperation.h"

@interface BKMatchOperation : BKOperation

@property (nonatomic) BOOL captureOnly; // ivar: _captureOnly
@property (copy, nonatomic) NSData *credentialSet; // ivar: _credentialSet
@property (weak, nonatomic) NSObject<BKMatchOperationDelegate> *delegate;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSInteger purpose; // ivar: _purpose
@property (copy, nonatomic) NSArray *selectedIdentities; // ivar: _selectedIdentities
@property (nonatomic) BOOL stopOnSuccess; // ivar: _stopOnSuccess
@property (nonatomic) NSInteger useCase; // ivar: _useCase
@property (retain, nonatomic) NSNumber *userID; // ivar: _userID


-(id)initWithDevice:(id)arg0 ;
-(id)matchResultInfoWithServerIdentity:(id)arg0 details:(id)arg1 ;
-(id)optionsDictionaryWithError:(*id)arg0 ;
-(void)dealloc;
-(void)matchResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)operationInterrupted;
-(void)processMatchFailReason:(NSInteger)arg0 ;
-(void)startBioOperation:(BOOL)arg0 reply:(id)arg1 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;


@end


#endif