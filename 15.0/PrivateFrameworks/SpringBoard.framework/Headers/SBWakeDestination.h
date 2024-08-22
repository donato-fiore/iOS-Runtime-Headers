// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWAKEDESTINATION_H
#define SBWAKEDESTINATION_H

@class NSString, SBSRemoteAlertDefinition;

#import <Foundation/Foundation.h>


@interface SBWakeDestination : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) SBSRemoteAlertDefinition *remoteAlertDefinition; // ivar: _remoteAlertDefinition
@property (nonatomic) NSUInteger type; // ivar: _type




@end


#endif