// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDEMOTILINGCONTROLLERWIDGETTILE_H
#define PXDEMOTILINGCONTROLLERWIDGETTILE_H

@class UIView, NSString;
@protocol PXUIViewBasicTile;

#import <Foundation/Foundation.h>


@interface PXDemoTilingControllerWidgetTile : NSObject <PXUIViewBasicTile>



@property (readonly, nonatomic) UIView *_mapView; // ivar: __mapView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)init;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;


@end


#endif