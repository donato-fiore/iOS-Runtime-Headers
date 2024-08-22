// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTENTLAUNCHERCLUSTERBRANDINGINFORMATION_H
#define MTRCONTENTLAUNCHERCLUSTERBRANDINGINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterStyleInformation.h"

@interface MTRContentLauncherClusterBrandingInformation : NSObject

@property (retain, nonatomic) MTRContentLauncherClusterStyleInformation *background; // ivar: _background
@property (retain, nonatomic) MTRContentLauncherClusterStyleInformation *logo; // ivar: _logo
@property (retain, nonatomic) MTRContentLauncherClusterStyleInformation *progressBar; // ivar: _progressBar
@property (retain, nonatomic) NSString *providerName; // ivar: _providerName
@property (retain, nonatomic) MTRContentLauncherClusterStyleInformation *splash; // ivar: _splash
@property (retain, nonatomic) MTRContentLauncherClusterStyleInformation *waterMark; // ivar: _waterMark


-(id)description;
-(id)init;


@end


#endif