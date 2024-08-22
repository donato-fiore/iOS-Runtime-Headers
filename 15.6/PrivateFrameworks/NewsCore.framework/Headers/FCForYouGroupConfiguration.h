// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFORYOUGROUPCONFIGURATION_H
#define FCFORYOUGROUPCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCForYouGroupConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL allowsNativeAds; // ivar: _allowsNativeAds
@property (nonatomic) NSUInteger groupPosition; // ivar: _groupPosition
@property (nonatomic) NSInteger groupType; // ivar: _groupType
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger precedingGroupsCount; // ivar: _precedingGroupsCount
@property (nonatomic) NSUInteger precedingGroupsCountForFirstGroup; // ivar: _precedingGroupsCountForFirstGroup


-(NSInteger)compareGroupPosition:(id)arg0 ;
-(id)copyWithGroupPosition:(NSUInteger)arg0 precedingGroupsCount:(NSUInteger)arg1 precedingGroupsCountForFirstGroup:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif