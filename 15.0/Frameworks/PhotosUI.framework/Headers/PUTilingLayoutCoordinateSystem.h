// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTILINGLAYOUTCOORDINATESYSTEM_H
#define PUTILINGLAYOUTCOORDINATESYSTEM_H

@class NSString;
@protocol PUTilingCoordinateSystem;

#import <Foundation/Foundation.h>


@interface PUTilingLayoutCoordinateSystem : NSObject <PUTilingCoordinateSystem>



@property (nonatomic) CGPoint coordinateSystemOrigin; // ivar: _coordinateSystemOrigin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUTilingCoordinateSystem> *parentCoordinateSystem; // ivar: _parentCoordinateSystem
@property (readonly) Class superclass;




@end


#endif