// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHAREPREPFOLDERFORSHARING_H
#define BRSHAREPREPFOLDERFORSHARING_H



#import "BRShareOperation.h"

@interface BRSharePrepFolderForSharing : BRShareOperation

@property (copy) id *prepFolderSharingCompletionBlock; // ivar: _prepFolderSharingCompletionBlock


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif