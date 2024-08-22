// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRTCWEAKLINKSUPPORT_H
#define MPRTCWEAKLINKSUPPORT_H


#import <Foundation/Foundation.h>


@interface MPRTCWeakLinkSupport : NSObject



+(BOOL)isRTCReportingSupported;
+(id)RTCReportingFrameworkPath;
+(id)newHierarchyTokenFromParentToken:(id)arg0 ;


@end


#endif