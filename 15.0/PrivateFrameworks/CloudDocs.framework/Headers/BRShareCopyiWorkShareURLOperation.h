// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSHARECOPYIWORKSHAREURLOPERATION_H
#define BRSHARECOPYIWORKSHAREURLOPERATION_H

@class NSString, CKShare;


#import "BROperation.h"

@interface BRShareCopyiWorkShareURLOperation : BROperation

@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (copy) id *shareCopyURLCompletionBlock; // ivar: _shareCopyURLCompletionBlock


+(id)iWorkShareableExtensions;
-(id)initWithShare:(id)arg0 appName:(id)arg1 ;
-(id)initWithShare:(id)arg0 documentType:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif