// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICORECONTACTSTORETESTFACADE_H
#define CNUICORECONTACTSTORETESTFACADE_H

@class NSArray, NSString, NSError, CNContact;
@protocol CNUICoreContactStoreFacade;

#import <Foundation/Foundation.h>


@interface CNUICoreContactStoreTestFacade : NSObject <CNUICoreContactStoreFacade>



@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *executedFetchRequests; // ivar: _executedFetchRequests
@property (retain, nonatomic) NSArray *executedSaveRequests; // ivar: _executedSaveRequests
@property (retain, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (retain, nonatomic) NSError *saveError; // ivar: _saveError
@property (readonly) Class superclass;


+(id)contactsBySimulatingExecutionOfSaveRequest:(id)arg0 onContacts:(id)arg1 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithMeContact:(id)arg0 contacts:(id)arg1 ;
-(id)initWithSaveError:(id)arg0 fetchError:(id)arg1 ;
-(void)commonInitWithMeContact:(id)arg0 contacts:(id)arg1 saveError:(id)arg2 fetchError:(id)arg3 ;


@end


#endif