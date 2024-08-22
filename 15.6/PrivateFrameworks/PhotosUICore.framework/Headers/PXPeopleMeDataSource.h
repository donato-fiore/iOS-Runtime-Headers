// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEMEDATASOURCE_H
#define PXPEOPLEMEDATASOURCE_H

@class NSString, CNContact;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;

#import <Foundation/Foundation.h>


@interface PXPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (nonatomic, getter=hasRequestedMeContact) BOOL requestedMeContact; // ivar: _requestedMeContact
@property (nonatomic, getter=hasRequestedSuggestedPerson) BOOL requestedSuggestedPerson; // ivar: _requestedSuggestedPerson
@property (retain, nonatomic) NSObject<PXPerson> *suggestedPerson; // ivar: _suggestedPerson
@property (readonly) Class superclass;


-(id)_fetchPersonWithUri:(id)arg0 ;
-(id)init;
-(id)suggestedPersonForMeViewController:(id)arg0 ;
-(void)_persistSuggestedPersonAsMe;
-(void)_requestMeContactWithCompletion:(id)arg0 ;
-(void)hasSuggestedPersonForMeWithCompletion:(id)arg0 ;
-(void)userDidAnswerMeViewController:(id)arg0 withResponse:(BOOL)arg1 suggestedPerson:(id)arg2 ;


@end


#endif