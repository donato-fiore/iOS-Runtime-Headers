// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATASSETLINKPOWERLOGGERAGGREGATIONKEY_H
#define ATASSETLINKPOWERLOGGERAGGREGATIONKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATAssetLinkPowerLoggerAggregationKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *dataclass; // ivar: _dataclass
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLinkType:(NSInteger)arg0 dataclass:(id)arg1 assetType:(id)arg2 ;


@end


#endif