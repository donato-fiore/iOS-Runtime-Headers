// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMAGAZINELAYOUTCOORDINATOR_H
#define PXMAGAZINELAYOUTCOORDINATOR_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PXMagazineRectArray.h"

@interface PXMagazineLayoutCoordinator : NSObject {
    PXMagazineRectArray *_fallbackLayout;
    CGFloat _currentBestScore;
}


@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (retain, nonatomic) PXMagazineRectArray *currentLayout; // ivar: _currentLayout
@property (readonly, nonatomic) NSArray *paddingInputs; // ivar: _paddingInputs
@property (retain, nonatomic) NSMutableArray *qualifiedLayouts; // ivar: _qualifiedLayouts
@property (nonatomic) BOOL stop; // ivar: _stop
@property (readonly, nonatomic) BOOL stopIfAnyGoodLayout; // ivar: _stopIfAnyGoodLayout
@property (readonly, nonatomic) CGFloat tileAspectRatio; // ivar: _tileAspectRatio


-(BOOL)validateCurrentLayout;
-(CGFloat)scoreOfLayout:(id)arg0 ;
-(id)currentBestLayout;
-(id)initWithPaddingInputs:(id)arg0 tileAspectRatio:(CGFloat)arg1 stopIfAnyGoodLayout:(BOOL)arg2 ;
-(void)validateCurrentLayoutAsFallback;


@end


#endif