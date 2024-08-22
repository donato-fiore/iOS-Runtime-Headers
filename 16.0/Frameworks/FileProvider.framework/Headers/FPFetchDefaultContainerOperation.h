// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPFETCHDEFAULTCONTAINEROPERATION_H
#define FPFETCHDEFAULTCONTAINEROPERATION_H

@class LSApplicationRecord, NSString;


#import "FPActionOperation.h"

@interface FPFetchDefaultContainerOperation : FPActionOperation {
    LSApplicationRecord *_requestedRecord;
    NSString *_domainIdentifier;
}


@property (copy, nonatomic) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock


-(id)initForApplicationRecord:(id)arg0 providerDomain:(id)arg1 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;


@end


#endif