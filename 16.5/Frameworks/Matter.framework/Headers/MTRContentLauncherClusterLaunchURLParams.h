// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERLAUNCHURLPARAMS_H
#define MTRCONTENTLAUNCHERCLUSTERLAUNCHURLPARAMS_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterBrandingInformationStruct.h"

@interface MTRContentLauncherClusterLaunchURLParams : NSObject <NSCopying>



@property (copy, nonatomic) MTRContentLauncherClusterBrandingInformationStruct *brandingInformation; // ivar: _brandingInformation
@property (copy, nonatomic) NSString *contentURL; // ivar: _contentURL
@property (copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif