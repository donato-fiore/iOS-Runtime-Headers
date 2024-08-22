// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMOMENTLIST_H
#define PHMOMENTLIST_H



#import "PHCollectionList.h"

@interface PHMomentList : PHCollectionList



+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasLocalizedTitle;
-(BOOL)hasLocationInfo;
-(Class)changeRequestClass;
-(NSInteger)collectionListType;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedLocationNames;
-(id)localizedTitle;


@end


#endif