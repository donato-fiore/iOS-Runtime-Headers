// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHKEYWORD_H
#define PHKEYWORD_H

@class NSString;


#import "PHObject.h"

@interface PHKeyword : PHObject

@property (readonly, nonatomic) NSString *shortcut; // ivar: _shortcut
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)entityKeyMap;
+(id)fetchKeywordsForAsset:(id)arg0 options:(id)arg1 ;
+(id)fetchKeywordsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchKeywordsWithOptions:(id)arg0 ;
+(id)fetchKeywordsWithTitles:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCode;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
-(Class)changeRequestClass;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif