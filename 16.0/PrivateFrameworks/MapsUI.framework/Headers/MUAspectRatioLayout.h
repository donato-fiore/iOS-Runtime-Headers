// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUASPECTRATIOLAYOUT_H
#define MUASPECTRATIOLAYOUT_H

@protocol MULayoutItem;


#import "MUConstraintLayout.h"
#import "MUAspectRatioLayoutInternal.h"

@interface MUAspectRatioLayout : MUConstraintLayout {
    MUAspectRatioLayoutInternal *_internal;
}


@property (nonatomic) CGFloat aspectRatio;
@property (weak, nonatomic) NSObject<MULayoutItem> *item;


-(id)initWithItem:(id)arg0 aspectRatio:(CGFloat)arg1 ;


@end


#endif