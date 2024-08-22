// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXRSWIDGETSUGGESTIONCANDIDATE_H
#define ATXRSWIDGETSUGGESTIONCANDIDATE_H

@class NSString, INIntent, NSArray, CHSAvocadoDescriptor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATXRSWidgetSuggestionCandidate : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *donationBundleIdentifier; // ivar: _donationBundleIdentifier
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) NSArray *relevanceProviders; // ivar: _relevanceProviders
@property (readonly, nonatomic) CHSAvocadoDescriptor *widgetDescriptor; // ivar: _widgetDescriptor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithWidgetDescriptor:(id)arg0 donationBundleIdentifier:(id)arg1 intent:(id)arg2 relevanceProviders:(id)arg3 ;


@end


#endif