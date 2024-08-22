// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCONTENTLAUNCHERCLUSTERBRANDINGINFORMATION_H
#define CHIPCONTENTLAUNCHERCLUSTERBRANDINGINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHIPContentLauncherClusterStyleInformation.h"

@interface CHIPContentLauncherClusterBrandingInformation : NSObject

@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *background; // ivar: _background
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *logo; // ivar: _logo
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *progressBar; // ivar: _progressBar
@property (retain, nonatomic) NSString *providerName; // ivar: _providerName
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *splash; // ivar: _splash
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *waterMark; // ivar: _waterMark


-(id)init;


@end


#endif