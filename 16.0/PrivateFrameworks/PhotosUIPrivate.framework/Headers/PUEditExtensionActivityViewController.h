// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITEXTENSIONACTIVITYVIEWCONTROLLER_H
#define PUEDITEXTENSIONACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;
@protocol PUEditExtensionActivityViewControllerDelegate;



@interface PUEditExtensionActivityViewController : UIActivityViewController

@property (weak, nonatomic) NSObject<PUEditExtensionActivityViewControllerDelegate> *editExtensionActivityViewControllerDelegate; // ivar: _editExtensionActivityViewControllerDelegate


-(BOOL)_shouldShowSystemActivityType:(id)arg0 ;
-(BOOL)_shouldUseModernDesign;
-(BOOL)appWantsLargePreview;
-(BOOL)isPhotosOrCamera;
-(void)_performActivity:(id)arg0 ;


@end


#endif