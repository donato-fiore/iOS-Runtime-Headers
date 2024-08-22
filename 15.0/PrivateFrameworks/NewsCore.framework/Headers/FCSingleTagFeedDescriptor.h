// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCSINGLETAGFEEDDESCRIPTOR_H
#define FCSINGLETAGFEEDDESCRIPTOR_H

@protocol FCTagProviding, FCPaidAccessCheckerType;


#import "FCFeedDescriptor.h"

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    NSInteger _feedType;
    NSInteger _feedSortMethod;
    NSInteger _feedFilterOptions;
    NSInteger _feedPersonalizationConfigurationSet;
}


@property (readonly, copy, nonatomic) NSObject<FCTagProviding> *masterTag; // ivar: _masterTag
@property (retain, nonatomic) NSObject<FCPaidAccessCheckerType> *paidAccessChecker; // ivar: _paidAccessChecker
@property (copy, nonatomic) NSObject<FCTagProviding> *tag; // ivar: _tag


-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg0 ;
-(BOOL)hideAccessoryText;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMutedWithSubscriptionController:(id)arg0 ;
-(BOOL)isSubscribable;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg0 ;
-(BOOL)subscribeToWithSubscriptionController:(id)arg0 eventInitiationLevel:(NSInteger)arg1 error:(*id)arg2 ;
-(NSInteger)feedFilterOptions;
-(NSInteger)feedPersonalizationConfigurationSet;
-(NSInteger)feedSortMethod;
-(NSInteger)feedType;
-(NSInteger)iAdContentProvider;
-(id)backingChannel;
-(id)backingChannelID;
-(id)backingSectionID;
-(id)backingTag;
-(id)backingTopicID;
-(id)iAdCategories;
-(id)iAdFeedID;
-(id)iAdKeywords;
-(id)iAdPrimaryAudience;
-(id)iAdSectionID;
-(id)initWithContext:(id)arg0 tag:(id)arg1 paidAccessChecker:(id)arg2 ;
-(id)initWithContext:(id)arg0 tag:(id)arg1 sortMethod:(NSInteger)arg2 filterOptions:(NSInteger)arg3 personalizationConfigurationSet:(NSInteger)arg4 paidAccessChecker:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)languagesWithSubscriptionController:(id)arg0 ;
-(id)name;
-(id)theme;
-(void)setFeedType:(NSInteger)arg0 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg0 eventInitiationLevel:(NSInteger)arg1 ;


@end


#endif