// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGPPTANIMATIONLAYOUT_H
#define PXGPPTANIMATIONLAYOUT_H

@class NSArray, NSString;
@protocol PXGSolidColorSource;


#import "PXGLayout.h"

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource>

 {
    ? _updateFlags;
    NSArray *_colors;
}


@property (readonly, nonatomic) NSString *configurationDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) unsigned int numberOfRows; // ivar: _numberOfRows
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(void)_updateContent;
-(void)referenceSizeDidChange;
-(void)update;


@end


#endif