// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMUTABLESYNCSETTINGS_H
#define DNDSMUTABLESYNCSETTINGS_H



#import "DNDSSyncSettings.h"

@interface DNDSMutableSyncSettings : DNDSSyncSettings

@property (nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (nonatomic, getter=isPairSyncEnabled) BOOL pairSyncEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif