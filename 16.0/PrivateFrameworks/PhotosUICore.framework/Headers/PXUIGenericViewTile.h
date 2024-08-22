// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUIGENERICVIEWTILE_H
#define PXUIGENERICVIEWTILE_H

@class UIView, NSString;
@protocol PXUIViewBasicTile;

#import <Foundation/Foundation.h>

#import "PXViewSpec.h"

@interface PXUIGenericViewTile : NSObject <PXUIViewBasicTile>

 {
    UIView *_view;
}


@property (retain, nonatomic, setter=_setSpec:) PXViewSpec *_spec; // ivar: __spec
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif