// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSCLOUDKITQUERYPROVIDER_H
#define BCSCLOUDKITQUERYPROVIDER_H

@class NSString;
@protocol BCSCloudKitQueryProviding;

#import <Foundation/Foundation.h>


@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_shardRecordNameForType:(NSInteger)arg0 index:(NSInteger)arg1 count:(NSInteger)arg2 ;
-(id)_shardRecordTypeForType:(NSInteger)arg0 ;
-(id)queryForFetchConfigItemWithType:(NSInteger)arg0 ;
-(id)queryForFetchItemsWithStartIndex:(NSInteger)arg0 endIndex:(NSInteger)arg1 type:(NSInteger)arg2 ;
-(id)queryForFetchShardIdentifier:(id)arg0 ;


@end


#endif