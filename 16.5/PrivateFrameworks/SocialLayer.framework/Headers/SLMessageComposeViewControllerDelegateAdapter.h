// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLMESSAGECOMPOSEVIEWCONTROLLERDELEGATEADAPTER_H
#define SLMESSAGECOMPOSEVIEWCONTROLLERDELEGATEADAPTER_H

@class NSString;
@protocol MFMessageComposeViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface SLMessageComposeViewControllerDelegateAdapter : NSObject <MFMessageComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly) Class superclass;


-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;


@end


#endif