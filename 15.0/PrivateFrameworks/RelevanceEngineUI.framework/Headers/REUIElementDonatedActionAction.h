// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUIELEMENTDONATEDACTIONACTION_H
#define REUIELEMENTDONATEDACTIONACTION_H

@class REElementAction, UIImage, NSString, REUISiriActionsPerformer;
@protocol REUISiriActionsPerformerDelegate, REUIElementDonatedActionActionDelegate;


#import "REUIDonatedElementProperties.h"

@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate>



@property (readonly, nonatomic) UIImage *appIcon;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REUIElementDonatedActionActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REUISiriActionsPerformer *performer; // ivar: _performer
@property (retain, nonatomic) REUIDonatedElementProperties *properties; // ivar: _properties
@property (readonly) Class superclass;


-(BOOL)siriActionsPerformer:(id)arg0 wantsToDismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)siriActionsPerformer:(id)arg0 wantsToPresentViewController:(id)arg1 ;
-(id)_newPerformer;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fullsizeAppIcon;
-(id)initWithProperties:(id)arg0 ;
-(id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg0 ;
-(id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg0 ;
-(void)_performWithContext:(id)arg0 ;
-(void)dealloc;
-(void)siriActionsPerformer:(id)arg0 didFailWithError:(id)arg1 ;
-(void)siriActionsPerformerDidSucceed:(id)arg0 ;
-(void)siriActionsPerformerWantsToSuppressDismissal:(id)arg0 ;


@end


#endif