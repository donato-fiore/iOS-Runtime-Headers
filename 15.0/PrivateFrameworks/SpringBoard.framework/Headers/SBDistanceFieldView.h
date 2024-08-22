// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDISTANCEFIELDVIEW_H
#define SBDISTANCEFIELDVIEW_H

@class UIView, NSString;



@interface SBDistanceFieldView : UIView

@property *CGColor foregroundColor;
@property BOOL invertsShape;
@property CGFloat lineWidth;
@property CGFloat offset;
@property (copy, nonatomic) NSString *renderMode;
@property CGFloat sharpness;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;


@end


#endif