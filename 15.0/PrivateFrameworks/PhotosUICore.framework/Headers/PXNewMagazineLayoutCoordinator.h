// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXNEWMAGAZINELAYOUTCOORDINATOR_H
#define PXNEWMAGAZINELAYOUTCOORDINATOR_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PXNewMagazineRectArray.h"

@interface PXNewMagazineLayoutCoordinator : NSObject {
    PXNewMagazineRectArray *_fallbackLayout;
    CGFloat _currentBestScore;
}


@property (readonly, nonatomic) PXNewMagazineRectArray *currentBestLayout;
@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (retain, nonatomic) PXNewMagazineRectArray *currentLayout; // ivar: _currentLayout
@property (readonly, nonatomic) NSUInteger currentLayoutsCount;
@property (readonly, nonatomic) NSArray *paddingInputs; // ivar: _paddingInputs
@property (retain, nonatomic) NSMutableArray *qualifiedLayouts; // ivar: _qualifiedLayouts
@property (nonatomic) BOOL stop; // ivar: _stop
@property (readonly, nonatomic) BOOL stopIfAnyGoodLayout; // ivar: _stopIfAnyGoodLayout
@property (readonly, nonatomic) CGFloat tileAspectRatio; // ivar: _tileAspectRatio


-(BOOL)validateCurrentLayout;
-(CGFloat)scoreOfLayout:(id)arg0 ;
-(id)initWithPaddingInputs:(id)arg0 tileGrid:(id)arg1 tileAspectRatio:(CGFloat)arg2 stopIfAnyGoodLayout:(BOOL)arg3 ;
-(void)validateCurrentLayoutAsFallback;


@end


#endif