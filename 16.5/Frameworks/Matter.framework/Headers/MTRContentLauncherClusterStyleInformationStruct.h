// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERSTYLEINFORMATIONSTRUCT_H
#define MTRCONTENTLAUNCHERCLUSTERSTYLEINFORMATIONSTRUCT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterDimensionStruct.h"

@interface MTRContentLauncherClusterStyleInformationStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *color; // ivar: _color
@property (copy, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) MTRContentLauncherClusterDimensionStruct *size; // ivar: _size


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif