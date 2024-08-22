// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRSHARECOPYSHAREURLOPERATION_H
#define BRSHARECOPYSHAREURLOPERATION_H

@class NSError, NSString, CKShare;


#import "BRShareOperation.h"

@interface BRShareCopyShareURLOperation : BRShareOperation {
    NSError *_error;
}


@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (copy) id *copyShareURLCompletionBlock; // ivar: _copyShareURLCompletionBlock
@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (copy) id *shareCopyURLCompletionBlock; // ivar: _shareCopyURLCompletionBlock


-(id)initWithFileURL:(id)arg0 documentType:(id)arg1 ;
-(id)initWithShare:(id)arg0 documentType:(id)arg1 ;
-(id)initWithShare:(id)arg0 fileURL:(id)arg1 documentType:(id)arg2 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif