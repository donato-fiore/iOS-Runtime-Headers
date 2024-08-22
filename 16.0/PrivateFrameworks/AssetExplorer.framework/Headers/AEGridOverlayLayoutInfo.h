// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEGRIDOVERLAYLAYOUTINFO_H
#define AEGRIDOVERLAYLAYOUTINFO_H

@protocol AETileLayoutInfo;

#import <Foundation/Foundation.h>


@interface AEGridOverlayLayoutInfo : NSObject <AETileLayoutInfo>



@property (readonly, nonatomic) CGSize _gradientImageSize; // ivar: __gradientImageSize


-(id)initWithGradientImageSize:(struct CGSize )arg0 ;
-(struct CGSize )tileSystemLayoutSizeFittingSize:(struct CGSize )arg0 ;


@end


#endif