// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICORECONTACTSTOREPRODUCTIONFACADE_H
#define CNUICORECONTACTSTOREPRODUCTIONFACADE_H

@class CNContactStore, NSString;
@protocol CNUICoreContactStoreFacade, CNUICoreParentContainerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreContactStoreProductionFacade : NSObject <CNUICoreContactStoreFacade, CNUICoreParentContainerProvider>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateContactsWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)containerForContact:(id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif