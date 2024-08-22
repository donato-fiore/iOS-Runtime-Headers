// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFLINEARGRADIENTVIEW_H
#define OFLINEARGRADIENTVIEW_H

@class NSArray;


#import "OFUIView.h"

@interface OFLinearGradientView : OFUIView

@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) CGPoint endPoint;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) CGPoint startPoint;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)gradientLayer;
-(void)dealloc;


@end


#endif