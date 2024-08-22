// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFORYOUGROUPSCONFIGURATION_H
#define FCFORYOUGROUPSCONFIGURATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCForYouGroupsConfiguration : NSObject {
    NSString *_configuration;
}


@property (copy, nonatomic) NSDictionary *groupConfigurationsByIdentifier; // ivar: _groupConfigurationsByIdentifier
@property (readonly, nonatomic) CGFloat weekendGreatStoriesYouMissedTimeRange; // ivar: _weekendGreatStoriesYouMissedTimeRange


+(id)_groupIdentifiersByType;
-(BOOL)_defaultAllowsNativeAdsValueForGroupType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_defaultGroupPositionValueForGroupType:(NSInteger)arg0 ;
-(NSUInteger)_defaultPrecedingGroupsCount:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)_identifierForGroupType:(NSInteger)arg0 ;
-(id)configurationForGroupType:(NSInteger)arg0 ;
-(id)initWithJSONConfiguration:(id)arg0 ;


@end


#endif