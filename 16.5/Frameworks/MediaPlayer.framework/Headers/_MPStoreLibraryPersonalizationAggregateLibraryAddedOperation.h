// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPSTORELIBRARYPERSONALIZATIONAGGREGATELIBRARYADDEDOPERATION_H
#define _MPSTORELIBRARYPERSONALIZATIONAGGREGATELIBRARYADDEDOPERATION_H



#import "MPAsyncOperation.h"
#import "MPMediaLibraryView.h"

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation {
    vector<long long, std::allocator<long long>> _persistentIDs;
}


@property (nonatomic) MPMediaLibraryView *libraryView; // ivar: _libraryView
@property ? persistentIDs;
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler




@end


#endif