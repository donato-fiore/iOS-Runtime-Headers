// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMPORTSESSION_H
#define PHIMPORTSESSION_H

@class NSString;


#import "PHAssetCollection.h"

@interface PHImportSession : PHAssetCollection

@property (readonly, nonatomic) NSString *importSessionID; // ivar: _importSessionID


+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)fetchImportSessionsWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif