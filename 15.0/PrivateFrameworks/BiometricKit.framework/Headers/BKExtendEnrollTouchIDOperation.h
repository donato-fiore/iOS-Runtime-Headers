// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKEXTENDENROLLTOUCHIDOPERATION_H
#define BKEXTENDENROLLTOUCHIDOPERATION_H

@class NSData;
@protocol BKExtendEnrollTouchIDOperationDelegate;


#import "BKOperation.h"
#import "BKIdentity.h"

@interface BKExtendEnrollTouchIDOperation : BKOperation

@property (copy, nonatomic) NSData *credentialSet; // ivar: _credentialSet
@property (weak, nonatomic) NSObject<BKExtendEnrollTouchIDOperationDelegate> *delegate;
@property (retain, nonatomic) BKIdentity *identity; // ivar: _identity


-(void)homeButtonPressed:(NSUInteger)arg0 ;
-(void)matchResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)startBioOperation:(BOOL)arg0 reply:(id)arg1 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;


@end


#endif