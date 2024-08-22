// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHBATCHFETCHEDASSETPROPERTYSET_H
#define PHBATCHFETCHEDASSETPROPERTYSET_H

@class NSString, NSKnownKeysDictionary, NSManagedObjectID;
@protocol PHBatchFetchedPropertySet;

#import <Foundation/Foundation.h>


@interface PHBatchFetchedAssetPropertySet : NSObject <PHBatchFetchedPropertySet>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSKnownKeysDictionary *knownKeysDictionary; // ivar: _knownKeysDictionary
@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly) Class superclass;


+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(NSInteger)batchSize;
+(NSInteger)cacheSize;
+(id)entityName;
+(id)fetchType;
+(id)propertiesToFetch;
+(id)propertiesToSortBy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjectID:(id)arg0 knownKeysDictionary:(id)arg1 photoLibrary:(id)arg2 ;


@end


#endif