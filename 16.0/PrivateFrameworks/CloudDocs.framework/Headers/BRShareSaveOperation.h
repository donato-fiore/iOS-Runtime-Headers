// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRSHARESAVEOPERATION_H
#define BRSHARESAVEOPERATION_H

@class CKShare;


#import "BRShareOperation.h"

@interface BRShareSaveOperation : BRShareOperation

@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (copy) id *shareSaveCompletionBlock; // ivar: _shareSaveCompletionBlock


+(BOOL)shouldRetryShareSaveOnError:(id)arg0 ;
-(id)initWithShare:(id)arg0 ;
-(id)initWithShare:(id)arg0 fileURL:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif