// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPBIOMESESSIONDONATOR_H
#define CPBIOMESESSIONDONATOR_H

@protocol CPConversationManagerDataSourceObserver;

#import <Foundation/Foundation.h>


@interface CPBiomeSessionDonator : NSObject <CPConversationManagerDataSourceObserver>

 {
    ? queue;
    ? biomeStream;
    ? biomeStreamSender;
}




-(id)init;
-(id)initWithDataSource:(id)arg0 parentQueue:(id)arg1 ;
-(void)conversationManager:(id)arg0 activityAuthorizationChangedForBundleIdentifier:(id)arg1 ;
-(void)conversationManager:(id)arg0 conversationChanged:(id)arg1 ;


@end


#endif