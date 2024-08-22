// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSTORABLEFEEDBACK_H
#define PPSTORABLEFEEDBACK_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface PPStorableFeedback : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSMutableArray *feedbackItems; // ivar: _feedbackItems
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasClientBundleIdentifier;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (nonatomic) BOOL hasIsMapped;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (nonatomic) BOOL hasSecondsFrom1970;
@property (nonatomic) BOOL hasStoreType;
@property (nonatomic) BOOL isMapped; // ivar: _isMapped
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId
@property (nonatomic) CGFloat secondsFrom1970; // ivar: _secondsFrom1970
@property (nonatomic) unsigned int storeType; // ivar: _storeType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackItemsAtIndex:(NSUInteger)arg0 ;
-(void)addFeedbackItems:(id)arg0 ;
-(void)clearFeedbackItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif