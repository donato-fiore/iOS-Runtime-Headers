// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHLIBRARYOVERSCROLLVIEWCONTROLLER_H
#define SBHLIBRARYOVERSCROLLVIEWCONTROLLER_H

@class UIViewController, NSString, _UILegibilitySettings;
@protocol SBHRootFolderCustomViewPresenting, SBIconListViewQuerying, SBIconLocationPresenting, SBIconViewQuerying;



@interface SBHLibraryOverscrollViewController : UIViewController <SBHRootFolderCustomViewPresenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<SBIconListViewQuerying> *iconListViewQueryable;
@property (readonly) NSObject<SBIconLocationPresenting> *iconLocationPresenter;
@property (readonly) NSObject<SBIconViewQuerying> *iconViewQueryable;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: legibilitySettings
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: occluded
@property (readonly, nonatomic) BOOL shouldBeIndicatedInPageControl;
@property (readonly) Class superclass;




@end


#endif