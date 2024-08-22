// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDHISTORYFETCHRESULT_H
#define WBSCLOUDHISTORYFETCHRESULT_H

@class NSMutableArray, NSMutableDictionary, NSDictionary, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface WBSCloudHistoryFetchResult : NSObject {
    NSMutableArray *_mutableCloudHistoryVisits;
    NSMutableArray *_mutableHistoryTombstones;
    NSMutableDictionary *_mutableClientVersions;
}


@property (readonly, nonatomic) NSDictionary *clientVersions;
@property (readonly, nonatomic) NSArray *cloudHistoryVisits;
@property (readonly, nonatomic) NSArray *historyTombstones;
@property (readonly, nonatomic) NSData *serverChangeTokenData; // ivar: _serverChangeTokenData


-(id)description;
-(id)init;
-(void)_addCloudHistoryVisit:(id)arg0 ;
-(void)_addHistoryTombstone:(id)arg0 ;
-(void)_updateClientVersion:(NSUInteger)arg0 seenAt:(id)arg1 ;


@end


#endif