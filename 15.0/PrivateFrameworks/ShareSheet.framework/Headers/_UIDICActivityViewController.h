// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDICACTIVITYVIEWCONTROLLER_H
#define _UIDICACTIVITYVIEWCONTROLLER_H

@class UIDocumentInteractionController<_UIDICActivityViewControllerDelegate>, NSString;
@protocol _UIDICActivityViewControllerDelegate;


#import "UIActivityViewController.h"

@interface _UIDICActivityViewController : UIActivityViewController

@property (weak, nonatomic) UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate; // ivar: _documentInteractionActivityDelegate
@property (retain, nonatomic) NSObject<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegateRetained; // ivar: _documentInteractionActivityDelegateRetained
@property (nonatomic) BOOL isPerformingActivity; // ivar: _isPerformingActivity
@property (retain, nonatomic) NSString *openActivityTargetApplicationIdentifier; // ivar: _openActivityTargetApplicationIdentifier
@property (nonatomic) NSUInteger options; // ivar: _options


-(BOOL)_shouldShowSystemActivityType:(id)arg0 ;
-(BOOL)hidesSystemActivities;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_handleDidFinishPerformingActivityType:(id)arg0 completed:(BOOL)arg1 resultItems:(id)arg2 activityError:(id)arg3 ;
-(void)_performActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 ;
-(void)_willPerformInServiceActivityType:(id)arg0 activitySpecificMetadata:(id)arg1 ;


@end


#endif