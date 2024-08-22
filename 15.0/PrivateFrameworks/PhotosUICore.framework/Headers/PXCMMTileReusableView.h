// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMTILEREUSABLEVIEW_H
#define PXCMMTILEREUSABLEVIEW_H

@class NSString, UIView;
@protocol PXUIViewBasicTile, PXReusableObject;

#import <Foundation/Foundation.h>


@interface PXCMMTileReusableView : NSObject <PXUIViewBasicTile, PXReusableObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *underlyingView; // ivar: _underlyingView
@property (readonly, nonatomic) UIView *view;


-(id)init;
-(id)initWithView:(id)arg0 ;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif