// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMEXTRACTEDDOCUMENTNAVIGATIONCONTROLLER_H
#define ICDOCCAMEXTRACTEDDOCUMENTNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol DCUnsavedDataDelegate;



@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithDelegate:(id)arg0 documentInfoCollection:(id)arg1 imageCache:(id)arg2 currentIndex:(NSInteger)arg3 mode:(int)arg4 ;
-(void)didReceiveMemoryWarning;
-(void)prepareForDismissal;


@end


#endif