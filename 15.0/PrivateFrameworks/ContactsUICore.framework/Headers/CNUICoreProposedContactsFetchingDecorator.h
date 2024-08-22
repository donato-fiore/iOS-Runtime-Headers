// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICOREPROPOSEDCONTACTSFETCHINGDECORATOR_H
#define CNUICOREPROPOSEDCONTACTSFETCHINGDECORATOR_H

@class NSString;
@protocol CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyInfoFetching, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreProposedContactsFetchingDecorator : NSObject <CNUICoreFamilyMemberContactsModelFetching>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNUICoreFamilyInfoFetching> *familyInfoFetcher; // ivar: _familyInfoFetcher
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsModelFetching> *modelFetcher; // ivar: _modelFetcher
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(id)modelWithProposedContactsFromFamilyInfo:(id)arg0 ;
+(id)proposedContactsFromFamilyInfo:(id)arg0 ;
-(id)allContactsModel;
-(id)initWithModelFetcher:(id)arg0 familyInfoFetcher:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithModelFetcher:(id)arg0 familyMember:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)whitelistedContactsModel;


@end


#endif