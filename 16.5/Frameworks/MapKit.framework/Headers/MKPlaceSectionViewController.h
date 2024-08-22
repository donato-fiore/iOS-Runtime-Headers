// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACESECTIONVIEWCONTROLLER_H
#define MKPLACESECTIONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate;


#import "MKPlaceSectionView.h"

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKPlaceSectionView *sectionView; // ivar: _sectionView
@property (readonly) Class superclass;


-(BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
-(void)dealloc;
-(void)loadView;
-(void)sectionView:(id)arg0 didDeselectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)sectionView:(id)arg0 didSelectFooter:(id)arg1 ;
-(void)sectionView:(id)arg0 didSelectHeader:(id)arg1 ;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)stackViewNeedsLayout:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif