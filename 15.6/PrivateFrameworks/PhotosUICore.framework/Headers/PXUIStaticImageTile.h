// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUISTATICIMAGETILE_H
#define PXUISTATICIMAGETILE_H

@class NSString, UIView;
@protocol PXUIViewBasicTile, PXReusableObject;

#import <Foundation/Foundation.h>

#import "PXImageUIView.h"
#import "PXImageViewSpec.h"

@interface PXUIStaticImageTile : NSObject <PXUIViewBasicTile, PXReusableObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXImageUIView *imageView; // ivar: _imageView
@property (retain, nonatomic) PXImageViewSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)initWithImage:(id)arg0 ;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif