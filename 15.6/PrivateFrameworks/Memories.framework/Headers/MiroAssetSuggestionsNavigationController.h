// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROASSETSUGGESTIONSNAVIGATIONCONTROLLER_H
#define MIROASSETSUGGESTIONSNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIAdaptivePresentationControllerDelegate;



@interface MiroAssetSuggestionsNavigationController : UINavigationController <UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)preferredUserInterfaceStyle;
-(void)awakeFromNib;


@end


#endif