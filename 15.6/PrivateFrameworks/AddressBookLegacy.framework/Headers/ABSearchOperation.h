// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSEARCHOPERATION_H
#define ABSEARCHOPERATION_H

@class NSOperation, NSThread, NSPredicate, NSArray;
@protocol ABSearchOperationDelegate;



@interface ABSearchOperation : NSOperation {
    *void _addressBook;
    *void _internalSearchAddressBook;
    NSThread *_progressBlockThread;
}


@property (nonatomic) *void addressBook;
@property (nonatomic) *void context; // ivar: _context
@property (nonatomic) NSObject<ABSearchOperationDelegate> *delegate; // ivar: _delegate
@property (nonatomic) *void internalSearchAddressBook;
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) NSArray *prefetchProperties; // ivar: _prefetchProperties
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (nonatomic) unsigned int sortOrdering; // ivar: _sortOrdering


+(id)personPredicateWithAnyValueForProperty:(int)arg0 addressBook:(*void)arg1 ;
+(id)personPredicateWithGroup:(*void)arg0 addressBook:(*void)arg1 ;
+(id)personPredicateWithName:(id)arg0 addressBook:(*void)arg1 ;
+(id)personPredicateWithNameLike:(id)arg0 addressBook:(*void)arg1 ;
+(id)personPredicateWithNameLike:(id)arg0 inAccount:(id)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithNameLike:(id)arg0 inGroup:(*void)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithNameLike:(id)arg0 inGroups:(id)arg1 sources:(id)arg2 addressBook:(*void)arg3 ;
+(id)personPredicateWithNameLike:(id)arg0 inSource:(*void)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithNameLike:(id)arg0 inSource:(*void)arg1 includeSourceInResults:(BOOL)arg2 addressBook:(*void)arg3 ;
+(id)personPredicateWithNameLike:(id)arg0 inSource:(*void)arg1 includeSourceInResults:(BOOL)arg2 includePhotosInResults:(BOOL)arg3 addressBook:(*void)arg4 ;
+(id)personPredicateWithNameOnly:(id)arg0 inAccount:(id)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithPhoneLike:(id)arg0 countryHint:(id)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithValue:(id)arg0 comparison:(NSInteger)arg1 forProperty:(int)arg2 addressBook:(*void)arg3 ;
-(BOOL)isConcurrent;
-(BOOL)predicateShouldContinue:(id)arg0 ;
-(BOOL)predicateShouldContinue:(id)arg0 afterFindingRecord:(*void)arg1 ;
-(void)_mainThread_tellDelegateSearchFoundMatch:(*void)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)main;


@end


#endif