// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBGRADIENTVIEW_H
#define SBGRADIENTVIEW_H

@class UIView, NSArray;



@interface SBGradientView : UIView

@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property CGPoint endPoint;
@property (copy, nonatomic) NSArray *locations;
@property CGPoint startPoint;


+(Class)layerClass;
-(id)color;


@end


#endif