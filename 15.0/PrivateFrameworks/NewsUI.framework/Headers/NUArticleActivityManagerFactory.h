// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEACTIVITYMANAGERFACTORY_H
#define NUARTICLEACTIVITYMANAGERFACTORY_H

@class NSString, FCReadingHistory, FCReadingList, FCSubscriptionList;
@protocol NUArticleActivityFactory, NUURLHandling, NUArticleActivityOptionsProvider;

#import <Foundation/Foundation.h>


@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory>



@property (readonly, nonatomic) NSObject<NUURLHandling> *URLHandler; // ivar: _URLHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUArticleActivityOptionsProvider> *optionsProvider; // ivar: _optionsProvider
@property (readonly, nonatomic) FCReadingHistory *readingHistory; // ivar: _readingHistory
@property (readonly, nonatomic) FCReadingList *readingList; // ivar: _readingList
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList; // ivar: _subscriptionList
@property (readonly) Class superclass;


-(id)activityProviderForHeadline:(id)arg0 reportConcernViewPresenter:(id)arg1 URLModifier:(id)arg2 ;
-(id)initWithReadingHistory:(id)arg0 readingList:(id)arg1 subscriptionList:(id)arg2 URLHandler:(id)arg3 optionsProvider:(id)arg4 ;


@end


#endif