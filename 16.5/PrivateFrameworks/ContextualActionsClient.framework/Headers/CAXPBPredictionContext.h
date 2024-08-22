// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXPBPREDICTIONCONTEXT_H
#define CAXPBPREDICTIONCONTEXT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface CAXPBPredictionContext : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contents; // ivar: _contents
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (readonly, nonatomic) BOOL hasSourceAppName;
@property (retain, nonatomic) NSMutableArray *previousActions; // ivar: _previousActions
@property (retain, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (retain, nonatomic) NSString *sourceAppName; // ivar: _sourceAppName
@property (nonatomic) CGFloat suggestionDate; // ivar: _suggestionDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)previousActionsAtIndex:(NSUInteger)arg0 ;
-(void)addContents:(id)arg0 ;
-(void)addPreviousActions:(id)arg0 ;
-(void)clearContents;
-(void)clearPreviousActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif