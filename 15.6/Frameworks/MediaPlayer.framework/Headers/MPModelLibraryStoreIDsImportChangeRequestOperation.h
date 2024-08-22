// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYSTOREIDSIMPORTCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYSTOREIDSIMPORTCHANGEREQUESTOPERATION_H

@class NSArray;


#import "MPAsyncOperation.h"
#import "MPMediaLibrary.h"
#import "MPModelObject.h"

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) MPModelObject *referralObject; // ivar: _referralObject
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) BOOL shouldLibraryAdd; // ivar: _shouldLibraryAdd
@property (copy, nonatomic) NSArray *storeIDs; // ivar: _storeIDs


-(void)execute;


@end


#endif