// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHFOCUSMODEFEATUREINTRODUCTIONITEM_H
#define SBHFOCUSMODEFEATUREINTRODUCTIONITEM_H

@class NSString, NSMutableSet;
@protocol SBHFocusModePopoverViewDelegate;


#import "SBHFeatureIntroductionItem.h"
#import "SBHIconManager.h"

@interface SBHFocusModeFeatureIntroductionItem : SBHFeatureIntroductionItem <SBHFocusModePopoverViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *focusModePopoverViews; // ivar: _focusModePopoverViews
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly) Class superclass;


-(BOOL)shouldDisplayFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(id)featureIntroductionIdentifier;
-(id)focusModePopoverViewActiveFocusMode:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 ;
-(struct CGRect )focusModePopoverViewFolderScrollAccessoryFrame:(id)arg0 ;
-(void)_removeActiveFocusModeRequiringIntroduction;
-(void)_tearDownFocusModePopoverView:(id)arg0 ;
// -(void)displayFeatureIntroductionAtLocations:(NSUInteger)arg0 presentCompletion:(id)arg1 dismissCompletion:(unk)arg2  ;
-(void)focusModePopoverView:(id)arg0 closeButtonTappedForIconListView:(id)arg1 ;
-(void)focusModePopoverView:(id)arg0 editPageButtonTappedForIconListView:(id)arg1 ;
-(void)setupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(void)tearDown;


@end


#endif