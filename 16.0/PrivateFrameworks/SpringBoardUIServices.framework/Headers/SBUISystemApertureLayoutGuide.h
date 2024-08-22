// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTURELAYOUTGUIDE_H
#define SBUISYSTEMAPERTURELAYOUTGUIDE_H

@class UILayoutGuide, UIView, NSArray;



@interface SBUISystemApertureLayoutGuide : UILayoutGuide {
    UIView *_currentRootGuideView;
}


@property (copy, nonatomic) NSArray *constraints; // ivar: _constraints


+(BOOL)prepareLayoutGuidesForViewControllerIfNeeded:(id)arg0 onlyIfEmpty:(BOOL)arg1 ;
+(void)_addUnpreparedLayoutGuide:(id)arg0 ;
+(void)_enumerateSystemApertureRootLayoutGuidesForViewController:(id)arg0 usingBlock:(id)arg1 ;
+(void)_enumerateUnpreparedSystemApertureLayoutGuides:(id)arg0 ;
+(void)_removeUnpreparedLayoutGuideIfNeeded:(id)arg0 ;
-(BOOL)_createOrUpdateConcentricRootLayoutGuideWithWindow:(id)arg0 ;
-(BOOL)_createOrUpdateConstraintsIfIsRootAndInAWindow;
-(BOOL)_createOrUpdateFixedFrameRootConstraintsWithWindow:(id)arg0 ;
-(BOOL)_createOrUpdateInsetBasedRootGuideWithWindow:(id)arg0 ;
-(BOOL)_requiresExplicitFrame;
-(BOOL)_requiresFloatableFixedSize;
-(BOOL)_requiresInitialSetup;
-(BOOL)_requiresInsets;
-(BOOL)constraintNeedsActivation:(id)arg0 ;
-(id)_rootGuide;
-(id)_rootGuideView;
-(void)_activateConstraintsWithRootLayoutGuide;
-(void)activateConstraintsIfNeeded;
-(void)prepareIfNeeded;


@end


#endif