// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTILEZOOMANIMATIONOPTIONS_H
#define PXTILEZOOMANIMATIONOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXTileZoomAnimationOptions : NSObject <NSCopying>



@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) BOOL shouldCrossfade; // ivar: _shouldCrossfade
@property (nonatomic) NSInteger transformType; // ivar: _transformType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif