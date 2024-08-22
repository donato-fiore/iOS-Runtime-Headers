// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSOFTLINKS_H
#define SLSOFTLINKS_H


#import <Foundation/Foundation.h>


@interface SLSoftLinks : NSObject



+(BOOL)canSendText;
+(id)newComposeViewControllerDelegateInstance:(id)arg0 ;
+(id)newComposeViewControllerInstance;
+(id)newComposeViewControllerInstanceWithDelegate:(id)arg0 itemProvider:(id)arg1 collaborationOptions:(id)arg2 collaborationMetadata:(id)arg3 ;


@end


#endif