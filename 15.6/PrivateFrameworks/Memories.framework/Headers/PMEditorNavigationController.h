// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMEDITORNAVIGATIONCONTROLLER_H
#define PMEDITORNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIPresentationControllerDelegatePrivate;



@interface PMEditorNavigationController : UINavigationController <UIPresentationControllerDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)preferredUserInterfaceStyle;
-(void)awakeFromNib;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;


@end


#endif