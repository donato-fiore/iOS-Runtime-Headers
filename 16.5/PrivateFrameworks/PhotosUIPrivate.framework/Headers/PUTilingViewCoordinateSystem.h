// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTILINGVIEWCOORDINATESYSTEM_H
#define PUTILINGVIEWCOORDINATESYSTEM_H

@class NSString;
@protocol PUTilingCoordinateSystem;

#import <Foundation/Foundation.h>

#import "PUTilingView.h"

@interface PUTilingViewCoordinateSystem : NSObject <PUTilingCoordinateSystem>



@property (readonly, nonatomic) CGPoint coordinateSystemOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<PUTilingCoordinateSystem> *parentCoordinateSystem;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) PUTilingView *tilingView; // ivar: _tilingView


-(id)init;
-(id)initWithTilingView:(id)arg0 ;


@end


#endif