// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCOLLECTIONSEARCHRESULT_H
#define PLCOLLECTIONSEARCHRESULT_H

@class NSDate, NSString;


#import "PLSearchResult.h"
#import "PSICollectionResult.h"
#import "PSIDate.h"

@interface PLCollectionSearchResult : PLSearchResult

@property (readonly, nonatomic) PSICollectionResult *collectionResult; // ivar: _collectionResult
@property (readonly, nonatomic) NSUInteger collectionType;
@property (readonly, nonatomic) PSIDate *endDate;
@property (nonatomic) NSUInteger libraryScope; // ivar: _libraryScope
@property (readonly, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) PSIDate *startDate;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *uuid;


-(NSUInteger)assetCount;
-(NSUInteger)type;
-(id)initWithGroupResult:(id)arg0 collectionResult:(id)arg1 libraryScope:(NSUInteger)arg2 ;
-(id)keyAssetUUID;


@end


#endif