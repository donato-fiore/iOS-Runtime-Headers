// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCSAVEDRECORDINGSCONTROLLER_H
#define RCSAVEDRECORDINGSCONTROLLER_H

@class NSFetchedResultsController, NSFetchRequest, NSPredicate, NSArray, NSString;
@protocol NSCopying, NSFetchedResultsControllerDelegate, RCFolder;



@interface RCSavedRecordingsController : NSFetchedResultsController <NSCopying>

 {
    NSFetchRequest *_fetchRequest;
    BOOL _hasPerformedFetch;
}


@property (weak, nonatomic) NSObject<NSFetchedResultsControllerDelegate> *defaultDelegate; // ivar: _defaultDelegate
@property (readonly, nonatomic) NSPredicate *fetchPredicate; // ivar: _fetchPredicate
@property (readonly, nonatomic) NSArray *fetchedRecordings;
@property (weak, nonatomic) NSObject<RCFolder> *folder; // ivar: _folder
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString


-(BOOL)performFetch:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchedObjects;
-(id)initWithFetchRequest:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)invalidate;
-(void)setDelegate:(id)arg0 ;


@end


#endif