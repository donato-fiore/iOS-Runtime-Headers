// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACECOVERPHOTOTRANSITIONCONTROLLER_H
#define MUPLACECOVERPHOTOTRANSITIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface MUPlaceCoverPhotoTransitionController : NSObject {
    MUPlaceHeaderMetrics _metrics;
    id *_updateHandler;
}


@property (readonly, nonatomic) CGFloat coverPhotoAlpha;
@property (readonly, nonatomic) NSInteger currentScrollDirection; // ivar: _currentScrollDirection
@property (nonatomic) CGFloat expansionProgress; // ivar: _expansionProgress
@property (readonly, nonatomic) BOOL hideLogo;
@property (readonly, nonatomic) CGFloat interpolatedCoverPhotoToTitleSpacing;
@property (readonly, nonatomic) CGFloat logoImageAlpha;
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;


-(CGFloat)coverPhotoHeightForProposedWidth:(CGFloat)arg0 ;
-(id)initWithMetrics:(struct MUPlaceHeaderMetrics )arg0 updateHandler:(id)arg1 ;
-(void)_updateWithOldProgress:(CGFloat)arg0 ;


@end


#endif