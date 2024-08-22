// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ILCLASSIFICATIONREPORTINGCONTROLLER_H
#define ILCLASSIFICATIONREPORTINGCONTROLLER_H

@class NSString, UIViewController;
@protocol MFMessageComposeViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface ILClassificationReportingController : NSObject <MFMessageComposeViewControllerDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (readonly) Class superclass;


-(id)init;
-(id)initWithHostViewController:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)reportResponse:(id)arg0 forExtension:(id)arg1 withCompletion:(id)arg2 ;
-(void)reportResponseViaNetwork:(id)arg0 forExtension:(id)arg1 withCompletion:(id)arg2 ;
-(void)reportResponseViaSMS:(id)arg0 forExtension:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif