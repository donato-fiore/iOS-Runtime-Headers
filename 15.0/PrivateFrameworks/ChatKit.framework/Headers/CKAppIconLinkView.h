// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPICONLINKVIEW_H
#define CKAPPICONLINKVIEW_H

@class UIView, NSMutableArray, NSString;


#import "CKSyndicationOnboardingTailedBubble.h"

@interface CKAppIconLinkView : UIView

@property (nonatomic) NSInteger appName; // ivar: _appName
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (nonatomic) CGRect linkFrame; // ivar: _linkFrame
@property (retain, nonatomic) NSString *previewString; // ivar: _previewString
@property (retain, nonatomic) UIView *previewView; // ivar: _previewView
@property (retain, nonatomic) CKSyndicationOnboardingTailedBubble *tailedBubble; // ivar: _tailedBubble


-(id)generateCroppedImageFromPreviewImage:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 withAppName:(NSInteger)arg1 ;
-(void)setPreviewImageForImage:(id)arg0 ;
-(void)setUpViewsForApp:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif