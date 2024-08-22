// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICHANDWRITINGDEBUGVIEWCONTROLLER_H
#define ICHANDWRITINGDEBUGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, NSArray, UITextView;
@protocol PKVisualizationManager, ICHandwritingDebugDelegate, OS_dispatch_queue;



@interface ICHandwritingDebugViewController : UIViewController <PKVisualizationManager>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *drawings; // ivar: _drawings
@property (weak, nonatomic) NSObject<ICHandwritingDebugDelegate> *handwritingDebugDelegate; // ivar: _handwritingDebugDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // ivar: _recognitionQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)_canShowWhileLocked;
-(id)handwritingDebugWindow;
-(void)close;
-(void)refresh;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)visualizationManagerDidUpdateRecognitionStatus:(id)arg0 ;


@end


#endif