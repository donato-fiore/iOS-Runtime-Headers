// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXCURATEDLIBRARYZOOMLEVELSEGMENTEDCONTROL_H
#define _PXCURATEDLIBRARYZOOMLEVELSEGMENTEDCONTROL_H

@class UISegmentedControl;



@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl

@property (readonly, nonatomic) BOOL lastTouchRemainedOnSelectedSegment; // ivar: _lastTouchRemainedOnSelectedSegment


+(CGFloat)_cornerRadiusForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_sectionIndicatorInsetForTraitCollection:(id)arg0 size:(int)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_highlightSegment:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif