// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTIMAGESTORE_H
#define CNCONTACTIMAGESTORE_H


#import <Foundation/Foundation.h>

#import "CNContactMetadataPersistentStoreManager.h"

@interface CNContactImageStore : NSObject

@property (retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager; // ivar: _storeManager


+(NSInteger)maximumContactImagesPerContact;
-(BOOL)performSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateExistingImagesIfNeededWithNewContactImage:(id)arg0 forContactIdentifier:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithContactMetadataStoreManager:(id)arg0 ;
-(id)managedObjectsToContactImages:(id)arg0 ;
-(id)performFetchRequest:(id)arg0 error:(*id)arg1 ;
-(void)ensureImageQuotasForImages:(id)arg0 inContext:(id)arg1 ;
-(void)insertContactImage:(id)arg0 withContactIdentifier:(id)arg1 inContext:(id)arg2 ;


@end


#endif