// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSHARINGCOPYSHAREURLOPERATION_H
#define BRCSHARINGCOPYSHAREURLOPERATION_H

@class NSString;


#import "BRCSharingModifyShareOperation.h"

@interface BRCSharingCopyShareURLOperation : BRCSharingModifyShareOperation {
    NSString *_appName;
}




-(id)createActivity;
-(id)initWithShare:(id)arg0 zone:(id)arg1 appName:(id)arg2 ;
-(void)_completedWithURL:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif