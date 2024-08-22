// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTNEWSMODULEDESCRIPTORSOPERATION_H
#define NTNEWSMODULEDESCRIPTORSOPERATION_H

@class NSArray;
@protocol NFCopying;


#import "NTTodayModuleDescriptorsOperation.h"

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSObject<NFCopying> *prefetchedContent; // ivar: _prefetchedContent
@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors; // ivar: _resultTodayModuleDescriptors


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif