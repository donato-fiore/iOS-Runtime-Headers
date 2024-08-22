// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERDIMENSIONSTRUCT_H
#define MTRCONTENTLAUNCHERCLUSTERDIMENSIONSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRContentLauncherClusterDimensionStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *height; // ivar: _height
@property (copy, nonatomic) NSNumber *metric; // ivar: _metric
@property (copy, nonatomic) NSNumber *width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif