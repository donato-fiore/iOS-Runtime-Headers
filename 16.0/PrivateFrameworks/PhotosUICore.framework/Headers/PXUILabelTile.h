// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUILABELTILE_H
#define PXUILABELTILE_H

@class NSString, UIView;
@protocol PXUIViewBasicTile;

#import <Foundation/Foundation.h>

#import "PXUILabel.h"
#import "PXLabelSpec.h"

@interface PXUILabelTile : NSObject <PXUIViewBasicTile>

 {
    PXUILabel *_label;
    PXLabelSpec *_spec;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) UIView *view;


-(void)_setSpec:(id)arg0 ;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif