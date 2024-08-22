// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPARSECMODULEDESCRIPTORSOPERATION_H
#define NTPARSECMODULEDESCRIPTORSOPERATION_H

@class NSArray;


#import "NTTodayModuleDescriptorsOperation.h"

@interface NTParsecModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors; // ivar: _resultTodayModuleDescriptors


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif