// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNACCOUNTSANDGROUPSSTYLE_H
#define CNACCOUNTSANDGROUPSSTYLE_H


#import <Foundation/Foundation.h>


@interface CNAccountsAndGroupsStyle : NSObject



+(id)styleForTraitCollection:(id)arg0 ;
-(id)backgroundColor;
-(id)cellBackgroundViewConfigurationProvider:(SEL)arg0 ;
-(id)cellConfigurationForSelectedState:(BOOL)arg0 ;
-(id)cellTrailingAccessoryConfigurationsForSelectedState:(BOOL)arg0 ;
-(id)parentCellConfigurationWithText:(id)arg0 ;
-(id)parentCellTrailingAccessoryConfigurations;
-(id)sectionConfigurationForLayoutEnvironment:(id)arg0 ;


@end


#endif