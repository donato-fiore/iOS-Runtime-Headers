// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUIWIDGETBARVIEWTILE_H
#define PXUIWIDGETBARVIEWTILE_H

@class NSString, UIView;
@protocol PXUIViewBasicTile;

#import <Foundation/Foundation.h>


@interface PXUIWidgetBarViewTile : NSObject <PXUIViewBasicTile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *view; // ivar: _view


-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;


@end


#endif