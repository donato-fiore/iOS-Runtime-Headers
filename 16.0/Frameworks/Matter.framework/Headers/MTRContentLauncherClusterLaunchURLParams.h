// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTENTLAUNCHERCLUSTERLAUNCHURLPARAMS_H
#define MTRCONTENTLAUNCHERCLUSTERLAUNCHURLPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterBrandingInformation.h"

@interface MTRContentLauncherClusterLaunchURLParams : NSObject

@property (retain, nonatomic) MTRContentLauncherClusterBrandingInformation *brandingInformation; // ivar: _brandingInformation
@property (retain, nonatomic) NSString *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif