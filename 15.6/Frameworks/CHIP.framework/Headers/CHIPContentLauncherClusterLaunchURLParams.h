// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCONTENTLAUNCHERCLUSTERLAUNCHURLPARAMS_H
#define CHIPCONTENTLAUNCHERCLUSTERLAUNCHURLPARAMS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHIPContentLauncherClusterBrandingInformation.h"

@interface CHIPContentLauncherClusterLaunchURLParams : NSObject

@property (retain, nonatomic) CHIPContentLauncherClusterBrandingInformation *brandingInformation; // ivar: _brandingInformation
@property (retain, nonatomic) NSString *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString


-(id)init;


@end


#endif