// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATUSERDEFAULTS_H
#define ATUSERDEFAULTS_H

@class NSMutableDictionary, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}


@property (retain, nonatomic) NSDictionary *diskUsageInfo;
@property (nonatomic) BOOL hasCompletedDataMigration;
@property (copy, nonatomic) NSNumber *minimumNetworkLinkQualityForDownloads;


+(id)readOnlyDefaults;
+(id)sharedInstance;
+(void)synchronize;
-(id)allHosts;
-(id)hostInfoForIdentifier:(id)arg0 ;
-(id)init;
-(void)_updateDefaults;
-(void)removeHost:(id)arg0 ;
-(void)updateHostInfo:(id)arg0 disabledAssetTypes:(id)arg1 ;
-(void)updateLastSyncWithHostLibrary:(id)arg0 ;


@end


#endif