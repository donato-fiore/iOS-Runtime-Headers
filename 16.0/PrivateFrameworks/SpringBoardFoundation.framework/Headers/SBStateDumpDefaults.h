// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTATEDUMPDEFAULTS_H
#define SBSTATEDUMPDEFAULTS_H

@class NSNumber;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBStateDumpDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isRemoteDumpEnabled) BOOL remoteDumpEnabled;
@property (retain, nonatomic) NSNumber *remoteDumpTimeout;


-(void)_bindAndRegisterDefaults;


@end


#endif