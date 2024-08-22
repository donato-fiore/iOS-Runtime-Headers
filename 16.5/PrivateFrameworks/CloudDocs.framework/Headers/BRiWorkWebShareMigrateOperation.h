// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRIWORKWEBSHAREMIGRATEOPERATION_H
#define BRIWORKWEBSHAREMIGRATEOPERATION_H

@class NSOperationQueue, NSURL;


#import "BROperation.h"

@interface BRiWorkWebShareMigrateOperation : BROperation

@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy) id *shareMigrationCompletionBlock; // ivar: _shareMigrationCompletionBlock
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 ;
-(void)_copyShare;
-(void)_migrateShare;
-(void)_startSharingReadWrite:(BOOL)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif