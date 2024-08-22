// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMUTABLEGLOBALCONFIGURATION_H
#define DNDSMUTABLEGLOBALCONFIGURATION_H

@class DNDBypassSettings, NSDate;


#import "DNDSGlobalConfiguration.h"

@interface DNDSMutableGlobalConfiguration : DNDSGlobalConfiguration

@property (nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (copy, nonatomic) DNDBypassSettings *bypassSettings;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic) NSUInteger preventAutoReply;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif