// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBREQUESTFORINTENTSUGGESTIONS_H
#define ATXPBREQUESTFORINTENTSUGGESTIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ATXPBRequestForSuggestions.h"

@interface ATXPBRequestForIntentSuggestions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBRequestForSuggestions *base; // ivar: _base
@property (retain, nonatomic) NSMutableArray *bundleIds; // ivar: _bundleIds
@property (readonly, nonatomic) BOOL hasBase;
@property (nonatomic) BOOL hasLimit;
@property (retain, nonatomic) NSMutableArray *intentClassNames; // ivar: _intentClassNames
@property (nonatomic) int limit; // ivar: _limit


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)intentClassNamesAtIndex:(NSUInteger)arg0 ;
-(void)addBundleIds:(id)arg0 ;
-(void)addIntentClassNames:(id)arg0 ;
-(void)clearBundleIds;
-(void)clearIntentClassNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif