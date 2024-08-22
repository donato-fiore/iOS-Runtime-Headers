// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYRULE_H
#define PXSHAREDLIBRARYRULE_H

@class NSArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryRule : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *assetLocalIdentifiers; // ivar: _assetLocalIdentifiers
@property (readonly, nonatomic) NSInteger autoSharePolicy; // ivar: _autoSharePolicy
@property (readonly, copy, nonatomic) NSArray *personUUIDs; // ivar: _personUUIDs
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)customizedRuleWithStartDate:(id)arg0 personUUIDs:(id)arg1 ;
+(id)everythingRule;
+(id)manualRule;
+(id)manualRuleWithAssetLocalIdentifiers:(id)arg0 ;
-(id)_initWithAutoSharePolicy:(NSInteger)arg0 startDate:(id)arg1 personUUIDs:(id)arg2 assetLocalIdentifiers:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif