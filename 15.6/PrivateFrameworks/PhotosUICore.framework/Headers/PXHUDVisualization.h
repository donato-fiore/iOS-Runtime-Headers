// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXHUDVISUALIZATION_H
#define PXHUDVISUALIZATION_H

@class UIColor, NSString;
@protocol PXHUDVisualizationDelegate;

#import <Foundation/Foundation.h>


@interface PXHUDVisualization : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (weak, nonatomic) NSObject<PXHUDVisualizationDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *title; // ivar: _title


-(void)_notifyDelegateVisualizationDidChange;


@end


#endif