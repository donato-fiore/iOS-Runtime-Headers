// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREFAMILYMEMBERCONTACTSMODELRETRIEVER_H
#define CNUICOREFAMILYMEMBERCONTACTSMODELRETRIEVER_H

@class NSString, CNSchedulerProvider;
@protocol CNUICoreFamilyMemberContactsModelFetching, CNScheduler, CNUICoreContactStoreFacade, CNDowntimeWhitelistContainerFetching, CNUICoreFamilyInfoFetching;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject <CNUICoreFamilyMemberContactsModelFetching>



@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundOrImmediateScheduler;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNDowntimeWhitelistContainerFetching> *downtimeContainerFetcher; // ivar: _downtimeContainerFetcher
@property (readonly, nonatomic) NSObject<CNUICoreFamilyInfoFetching> *familyInfoFetcher; // ivar: _familyInfoFetcher
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNSchedulerProvider *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(NSInteger)contactFormatterStyle;
+(id)keysToFetch;
-(id)allContacts;
-(id)allContactsModel;
-(id)init;
-(id)initWithContactStoreFacade:(id)arg0 familyInfoFetcher:(id)arg1 downtimeContainerFetcher:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithDowntimeContainerFetcher:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)modelBuilderForContacts:(id)arg0 familyInfo:(id)arg1 ;
-(id)modelBuilderForWhitelistedContacts:(id)arg0 familyInfo:(id)arg1 ;
-(id)whitelistedContactsModel;


@end


#endif