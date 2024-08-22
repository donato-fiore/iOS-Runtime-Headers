// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTORELIBRARYMAPPINGREQUESTOPERATION_H
#define MPSTORELIBRARYMAPPINGREQUESTOPERATION_H

@class NSArray;


#import "MPAsyncOperation.h"
#import "MPMediaLibraryView.h"

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation

@property (copy, nonatomic) NSArray *identifierSets; // ivar: _identifierSets
@property (copy, nonatomic) MPMediaLibraryView *libraryView; // ivar: _libraryView
@property (nonatomic) Class modelClass; // ivar: _modelClass
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


+(BOOL)supportsModelClass:(Class)arg0 ;
-(void)execute;


@end


#endif