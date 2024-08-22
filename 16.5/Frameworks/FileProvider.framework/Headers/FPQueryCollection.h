// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPQUERYCOLLECTION_H
#define FPQUERYCOLLECTION_H

@class NSArray, NSString, NSNumber, NSPredicate;
@protocol FPSpotlightDataSourceDelegate;


#import "FPItemCollection.h"
#import "FPQueryEnumerationSettings.h"

@interface FPQueryCollection : FPItemCollection <FPSpotlightDataSourceDelegate>

 {
    Class _descriptorClass;
    BOOL _isFetchingAssertion;
}


@property (copy) NSArray *allowedFileTypes;
@property (copy) NSArray *allowedProviderIdentifiers;
@property (copy) NSString *descriptionName; // ivar: _descriptionName
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *excludedFileTypes;
@property (readonly, nonatomic) NSUInteger itemsOrigin; // ivar: _itemsOrigin
@property (readonly) NSUInteger lastForcedUpdate;
@property (readonly) NSPredicate *predicate; // ivar: _predicate
@property (readonly) FPQueryEnumerationSettings *settings; // ivar: _settings
@property (copy) NSString *tagIdentifier;


+(void)disableMountPointQueries;
+(void)enableMountPointQueries;
+(void)resumeAllQueries;
+(void)suspendAllQueries;
-(id)_createDescriptorWithSortDescriptors:(id)arg0 ;
-(id)_enumerationSettingsPredicate;
-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)description;
-(id)initWithQueryDescriptorClass:(Class)arg0 ;
-(id)initWithQueryDescriptorClass:(Class)arg0 predicate:(id)arg1 ;
-(id)initWithQueryDescriptorClass:(Class)arg0 predicate:(id)arg1 paced:(BOOL)arg2 ;
-(id)scopedSearchQuery;
-(id)underlyingQueryStringForMountPoint:(id)arg0 ;
-(void)dataSource:(id)arg0 didChangeItemsOrigin:(NSUInteger)arg1 ;


@end


#endif