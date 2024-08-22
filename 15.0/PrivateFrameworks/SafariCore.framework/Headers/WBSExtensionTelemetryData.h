// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSEXTENSIONTELEMETRYDATA_H
#define WBSEXTENSIONTELEMETRYDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSExtensionTelemetryData : NSObject

@property (nonatomic) BOOL allWebsitesPermissionLevel; // ivar: _allWebsitesPermissionLevel
@property (nonatomic) BOOL canOverrideNewTabPage; // ivar: _canOverrideNewTabPage
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger websitesDeniedAccessCount; // ivar: _websitesDeniedAccessCount
@property (nonatomic) NSUInteger websitesGrantedAccessCount; // ivar: _websitesGrantedAccessCount




@end


#endif