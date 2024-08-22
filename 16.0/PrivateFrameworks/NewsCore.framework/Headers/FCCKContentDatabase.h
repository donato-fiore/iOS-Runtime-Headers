// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKCONTENTDATABASE_H
#define FCCKCONTENTDATABASE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCNetworkBehaviorMonitor.h"

@interface FCCKContentDatabase : NSObject

@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) BOOL isProductionEnvironment; // ivar: _isProductionEnvironment
@property (nonatomic) CGFloat maximumRetryAfterForCK; // ivar: _maximumRetryAfterForCK
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (nonatomic) BOOL shouldBypassCDNForCKAssetURLs; // ivar: _shouldBypassCDNForCKAssetURLs
@property (readonly, nonatomic) BOOL shouldUseCloudd; // ivar: _shouldUseCloudd
@property (nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs; // ivar: _shouldUseSecureConnectionForCKAssetURLs


-(id)init;
-(id)initWithContainerIdentifier:(id)arg0 productionEnvironment:(BOOL)arg1 networkBehaviorMonitor:(id)arg2 ;
-(id)initWithContextConfiguration:(id)arg0 networkBehaviorMonitor:(id)arg1 ;
-(id)permanentURLForRecordID:(id)arg0 field:(NSInteger)arg1 ;
-(id)permanentURLForRecordID:(id)arg0 field:(NSInteger)arg1 useSecureConnection:(BOOL)arg2 ;
-(void)addOperation:(id)arg0 ;
-(void)updateAssetURLHostIfNeededWithComponents:(id)arg0 ;


@end


#endif