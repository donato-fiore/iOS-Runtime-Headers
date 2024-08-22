// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSUSERPICTUREVIEW_H
#define CSUSERPICTUREVIEW_H

@class _UILegibilityView, CNContact, NSString, _UILegibilitySettings;
@protocol SBUILegibility;


#import "CSCoverSheetViewBase.h"

@interface CSUserPictureView : CSCoverSheetViewBase <SBUILegibility>

 {
    _UILegibilityView *_monogramLegibilityView;
}


@property (copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _legibilityStrength
@property (readonly) Class superclass;


+(id)_monogrammerForLegibilitySettings:(id)arg0 diameter:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentationRegions;
-(void)_regenerateImage;
-(void)layoutSubviews;


@end


#endif