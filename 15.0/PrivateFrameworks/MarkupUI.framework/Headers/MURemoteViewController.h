// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUREMOTEVIEWCONTROLLER_H
#define MUREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol MURemoteViewProtocol;



@interface MURemoteViewController : UIRemoteViewController <MURemoteViewProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *finishedWithResultsCompletionBlock; // ivar: _finishedWithResultsCompletionBlock
@property (readonly) NSUInteger hash;
@property NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle
@property BOOL shouldResignFirstResponder; // ivar: _shouldResignFirstResponder
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)beginDismissWithInfo:(id)arg0 ;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)serviceDidFinishwithResults:(id)arg0 andSandboxExtension:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif