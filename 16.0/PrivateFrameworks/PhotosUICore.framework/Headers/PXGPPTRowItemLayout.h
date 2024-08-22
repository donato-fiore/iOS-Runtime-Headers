// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPPTROWITEMLAYOUT_H
#define PXGPPTROWITEMLAYOUT_H

@class UIColor, NSString;
@protocol PXGSolidColorSource;


#import "PXGLayout.h"

@interface PXGPPTRowItemLayout : PXGLayout <PXGSolidColorSource>

 {
    ? _updateFlags;
    unsigned int _colorSpriteIndex;
}


@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithColor:(id)arg0 ;
-(void)_invalidateContent;
-(void)_updateContent;
-(void)referenceSizeDidChange;
-(void)update;


@end


#endif