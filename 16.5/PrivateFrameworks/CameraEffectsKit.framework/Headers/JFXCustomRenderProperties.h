// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXCUSTOMRENDERPROPERTIES_H
#define JFXCUSTOMRENDERPROPERTIES_H

@protocol PVCompositeDelegate;

#import <Foundation/Foundation.h>


@interface JFXCustomRenderProperties : NSObject

@property (nonatomic) BOOL animojiTapPoint; // ivar: _animojiTapPoint
@property (readonly, nonatomic) id *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSObject<PVCompositeDelegate> *renderingDelegate; // ivar: _renderingDelegate


+(id)newCustomRenderProperties:(id)arg0 metadata:(id)arg1 ;


@end


#endif