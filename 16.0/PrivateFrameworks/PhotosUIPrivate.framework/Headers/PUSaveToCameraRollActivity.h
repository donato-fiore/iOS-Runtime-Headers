// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSAVETOCAMERAROLLACTIVITY_H
#define PUSAVETOCAMERAROLLACTIVITY_H

@class UISaveToCameraRollActivity, NSString;
@protocol PXActivity, PXActivityItemSourceController;



@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PXActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: _itemSourceController
@property (readonly) Class superclass;


-(BOOL)_itemIsVideoAtURL:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif