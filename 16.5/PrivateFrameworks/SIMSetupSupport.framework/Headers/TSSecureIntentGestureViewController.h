// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSECUREINTENTGESTUREVIEWCONTROLLER_H
#define TSSECUREINTENTGESTUREVIEWCONTROLLER_H

@class PRXCardContentViewController, PRXAction, LAContext, NSString, PKGlyphView, LAUIPhysicalButtonView;
@protocol LAUIDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSSecureIntentGestureViewController : PRXCardContentViewController <LAUIDelegate, TSSetupFlowItem>



@property (retain, nonatomic) PRXAction *confirmTextView; // ivar: _confirmTextView
@property (retain, nonatomic) LAContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKGlyphView *glyphView; // ivar: _glyphView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExternalizedContextSent; // ivar: _isExternalizedContextSent
@property BOOL isSecureIntentFailed; // ivar: _isSecureIntentFailed
@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView; // ivar: _physicalButtonView
@property (readonly) Class superclass;


-(id)_createPKGlyphView;
-(id)initWithExternalizedContext:(id)arg0 ;
-(void)_doubleClickGesture;
-(void)_maybeSendExternalizedContext:(id)arg0 ;
-(void)_updateAuthenticationStatus:(BOOL)arg0 ;
-(void)_viewWillComplete;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif