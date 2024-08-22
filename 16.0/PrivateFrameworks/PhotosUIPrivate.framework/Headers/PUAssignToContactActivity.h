// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSIGNTOCONTACTACTIVITY_H
#define PUASSIGNTOCONTACTACTIVITY_H

@class UIAssignToContactActivity, NSString;
@protocol UINavigationControllerDelegate, PXActivity, PXActivityItemSourceController;



@interface PUAssignToContactActivity : UIAssignToContactActivity <UINavigationControllerDelegate, PXActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: _itemSourceController
@property (readonly) Class superclass;


-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityViewController;


@end


#endif