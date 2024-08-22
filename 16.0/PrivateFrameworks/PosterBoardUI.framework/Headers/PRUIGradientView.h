// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUIGRADIENTVIEW_H
#define PRUIGRADIENTVIEW_H

@class UIView, NSArray;



@interface PRUIGradientView : UIView

@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) CGPoint endPoint;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) CGPoint startPoint;


+(Class)layerClass;
-(id)layer;


@end


#endif