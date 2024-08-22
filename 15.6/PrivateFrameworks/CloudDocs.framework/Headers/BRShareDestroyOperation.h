// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHAREDESTROYOPERATION_H
#define BRSHAREDESTROYOPERATION_H

@class CKShare;


#import "BRShareOperation.h"

@interface BRShareDestroyOperation : BRShareOperation

@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (copy) id *shareDestroyCompletionBlock; // ivar: _shareDestroyCompletionBlock


-(id)initWithShare:(id)arg0 ;
-(id)initWithShare:(id)arg0 fileURL:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif