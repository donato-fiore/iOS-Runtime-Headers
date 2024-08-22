// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCOPYTOPASTEBOARDACTIVITY_H
#define PUCOPYTOPASTEBOARDACTIVITY_H

@class UICopyToPasteboardActivity, NSString;
@protocol PXActivity, PXActivityItemSourceController;



@interface PUCopyToPasteboardActivity : UICopyToPasteboardActivity <PXActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: _itemSourceController
@property (readonly) Class superclass;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityTitle;


@end


#endif