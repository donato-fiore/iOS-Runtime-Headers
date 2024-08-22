// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHARINGMODIFYRECORDACCESSOPERATION_H
#define BRSHARINGMODIFYRECORDACCESSOPERATION_H

@class NSURL;


#import "BRShareOperation.h"

@interface BRSharingModifyRecordAccessOperation : BRShareOperation {
    NSURL *_fileURL;
    BOOL _allowAccess;
}


@property (copy) id *accessAllowedCompletionBlock; // ivar: _accessAllowedCompletionBlock
@property (copy) id *allowAccessCompletionBlock; // ivar: _allowAccessCompletionBlock


-(id)initWithURL:(id)arg0 allowAccess:(BOOL)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif