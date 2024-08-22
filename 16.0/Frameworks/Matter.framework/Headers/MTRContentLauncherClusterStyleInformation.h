// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTENTLAUNCHERCLUSTERSTYLEINFORMATION_H
#define MTRCONTENTLAUNCHERCLUSTERSTYLEINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterDimension.h"

@interface MTRContentLauncherClusterStyleInformation : NSObject

@property (retain, nonatomic) NSString *color; // ivar: _color
@property (retain, nonatomic) NSString *imageUrl; // ivar: _imageUrl
@property (retain, nonatomic) MTRContentLauncherClusterDimension *size; // ivar: _size


-(id)description;
-(id)init;


@end


#endif