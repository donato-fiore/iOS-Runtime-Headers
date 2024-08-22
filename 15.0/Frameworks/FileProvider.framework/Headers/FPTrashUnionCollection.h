// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPTRASHUNIONCOLLECTION_H
#define FPTRASHUNIONCOLLECTION_H

@protocol OS_dispatch_queue;


#import "FPUnionCollection.h"
#import "FPQueryCollection.h"

@interface FPTrashUnionCollection : FPUnionCollection {
    id *_providerDomainChangesToken;
    FPQueryCollection *_trashQueryCollection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) FPQueryCollection *trashQueryCollection;


-(id)filterDomains:(id)arg0 ;
-(id)initWithQueryCollection:(id)arg0 ;
-(id)scopedSearchQuery;
-(void)fetchTrashItemsFromProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)setAllowedFileTypes:(id)arg0 ;
-(void)setDesiredNumberOfItems:(id)arg0 ;
-(void)setExcludedFileTypes:(id)arg0 ;
-(void)updateCollectionsForDomains:(id)arg0 ;


@end


#endif