// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSABLEREGIONMAPENTRY_H
#define _UIFOCUSABLEREGIONMAPENTRY_H

@class UIFocusRegionMapEntry;
@protocol _UILegacyFocusRegion;



@interface _UIFocusableRegionMapEntry : UIFocusRegionMapEntry

@property (nonatomic, getter=isFocusCandidate) BOOL focusCandidate; // ivar: _focusCandidate
@property (weak, nonatomic) NSObject<_UILegacyFocusRegion> *focusableRegion; // ivar: _focusableRegion
@property (nonatomic) BOOL isFocusGuide; // ivar: _isFocusGuide


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)visualRepresentationColor;
-(void)drawVisualRepresentationInContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 isFinal:(BOOL)arg2 ;


@end


#endif