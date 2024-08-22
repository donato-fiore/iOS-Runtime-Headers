// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUSAGEDETAILITEM_H
#define STUSAGEDETAILITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STUsageDetailItem : NSObject

@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isAllAppsOrCategories;
@property (nonatomic) float quantity; // ivar: _quantity
@property (readonly) float sortQuantity;
@property NSInteger type; // ivar: _type
@property (readonly) BOOL usageTrusted; // ivar: _usageTrusted


+(id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+(id)keyPathsForValuesAffectingSortQuantity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 usageTrusted:(BOOL)arg2 ;


@end


#endif