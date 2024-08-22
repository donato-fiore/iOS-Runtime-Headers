// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERHOSTMANAGERMAC_H
#define _UIPOPOVERHOSTMANAGERMAC_H

@class NSString;
@protocol _UIPopoverHostManager;

#import <Foundation/Foundation.h>


@interface _UIPopoverHostManagerMac : NSObject <_UIPopoverHostManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldOccludeDuringPresentationForPopoverWithIdentifier:(id)arg0 ;
-(BOOL)useDefaultPreferredAnimationControllerForDismissalWithPopoverWithIdentifier:(id)arg0 ;
-(BOOL)useDefaultPreferredAnimationControllerForPresentationWithPopoverWithIdentifier:(id)arg0 ;
-(BOOL)useDefaultPresentationViewForPopoverWithIdentifier:(id)arg0 ;
-(id)createPopoverWithConfiguration:(id)arg0 ;
-(id)popoverSceneForPopoverWithIdentifier:(id)arg0 ;
-(void)closePopoverWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)detachPopoverWithIdentifier:(id)arg0 fromPoint:(struct CGPoint )arg1 withCompletionCallback:(id)arg2 ;
-(void)updatePopoverWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)updateSupportsDetach:(BOOL)arg0 forPopoverWithIdentifier:(id)arg1 ;
-(void)updateUserInterfaceStyle:(NSInteger)arg0 forPopoverWithIdentifier:(id)arg1 ;


@end


#endif