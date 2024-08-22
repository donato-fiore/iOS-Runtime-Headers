// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEGENERICVIEWTILE_H
#define AEGENERICVIEWTILE_H

@class NSString, UIView;
@protocol PXUIViewBasicTile, PXReusableObject;

#import <Foundation/Foundation.h>


@interface AEGenericViewTile : NSObject <PXUIViewBasicTile, PXReusableObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 ;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif