// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVGLYPHSTATE_H
#define ASVGLYPHSTATE_H

@protocol ASVGlyphStateDelegate;

#import <Foundation/Foundation.h>


@interface ASVGlyphState : NSObject {
    ? _quaternionTarget;
    ? _scaleTarget;
    ? _translationTarget;
    NSUInteger _snapState;
}


@property (weak, nonatomic) NSObject<ASVGlyphStateDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ? quaternionTarget;
@property ? scaleTarget;
@property (nonatomic) NSUInteger snapState;
@property ? translationTarget;




@end


#endif