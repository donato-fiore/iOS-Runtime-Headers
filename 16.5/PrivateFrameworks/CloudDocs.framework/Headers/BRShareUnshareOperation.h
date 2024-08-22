// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRSHAREUNSHAREOPERATION_H
#define BRSHAREUNSHAREOPERATION_H

@class CKShare;


#import "BRShareOperation.h"

@interface BRShareUnshareOperation : BRShareOperation

@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (copy) id *unshareCompletionBlock; // ivar: _unshareCompletionBlock


-(id)initWithShare:(id)arg0 ;
-(id)initWithShare:(id)arg0 fileURL:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif