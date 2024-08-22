// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCONTENTLAUNCHERCLUSTERSTYLEINFORMATION_H
#define CHIPCONTENTLAUNCHERCLUSTERSTYLEINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHIPContentLauncherClusterDimension.h"

@interface CHIPContentLauncherClusterStyleInformation : NSObject

@property (retain, nonatomic) NSString *color; // ivar: _color
@property (retain, nonatomic) NSString *imageUrl; // ivar: _imageUrl
@property (retain, nonatomic) CHIPContentLauncherClusterDimension *size; // ivar: _size


-(id)init;


@end


#endif