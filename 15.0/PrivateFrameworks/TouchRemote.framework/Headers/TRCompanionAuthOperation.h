// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRCOMPANIONAUTHOPERATION_H
#define TRCOMPANIONAUTHOPERATION_H

@class ACAccount, NSSet;


#import "TROperation.h"

@interface TRCompanionAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL shouldUseAIDA; // ivar: _shouldUseAIDA
@property (retain, nonatomic) NSSet *targetedServices; // ivar: _targetedServices


-(void)_handleResponse:(id)arg0 ;
-(void)execute;


@end


#endif