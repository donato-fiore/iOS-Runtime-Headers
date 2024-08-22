// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGBACKUPDISABLEDAPPSINFO_H
#define PSGBACKUPDISABLEDAPPSINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PSGBackupDisabledAppsInfo : NSObject

@property (nonatomic) NSInteger backupDisabledAppCount; // ivar: _backupDisabledAppCount
@property (retain, nonatomic) NSArray *backupDisabledAppsForDisplay; // ivar: _backupDisabledAppsForDisplay
@property (nonatomic) BOOL includePhoto; // ivar: _includePhoto




@end


#endif