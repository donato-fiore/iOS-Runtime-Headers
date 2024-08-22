// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFEMITTERVIEW_H
#define OFEMITTERVIEW_H

@class NSArray, NSString;


#import "OFUIView.h"

@interface OFEmitterView : OFUIView

@property (nonatomic) CGFloat birthRate;
@property (nonatomic) NSArray *emitterCells;
@property (nonatomic) CGFloat emitterDepth;
@property (nonatomic) NSString *emitterMode;
@property (nonatomic) CGPoint emitterPosition;
@property (nonatomic) NSString *emitterShape;
@property (nonatomic) CGSize emitterSize;
@property (nonatomic) CGFloat emitterZPosition;
@property (nonatomic) CGFloat lifetime;
@property (nonatomic) NSString *renderMode;
@property (nonatomic) CGFloat scale;
@property (nonatomic) unsigned int seed;
@property (nonatomic) CGFloat spin;
@property (nonatomic) CGFloat velocity;


+(Class)layerClass;
-(id)emitterLayer;
-(void)dealloc;


@end


#endif