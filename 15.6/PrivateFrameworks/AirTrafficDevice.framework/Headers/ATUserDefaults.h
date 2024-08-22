// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATUSERDEFAULTS_H
#define ATUSERDEFAULTS_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}


@property (retain, nonatomic) NSDictionary *diskUsageInfo;
@property (nonatomic) BOOL hasCompletedDataMigration;


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