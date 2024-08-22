// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATERAP_H
#define GEOLOGMSGSTATERAP_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOLogMsgStateRAP : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _duration;
    NSMutableArray *_feedbackFieldOptionKeys;
    NSString *_rapAbBranchId;
    NSString *_rapAbManifestVersion;
    NSString *_rapServerManifestVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _entryPoint;
    int _feedbackType;
    ? _flags;
}


@property (nonatomic) CGFloat duration;
@property (nonatomic) int entryPoint;
@property (retain, nonatomic) NSMutableArray *feedbackFieldOptionKeys;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEntryPoint;
@property (nonatomic) BOOL hasFeedbackType;
@property (readonly, nonatomic) BOOL hasRapAbBranchId;
@property (readonly, nonatomic) BOOL hasRapAbManifestVersion;
@property (readonly, nonatomic) BOOL hasRapServerManifestVersion;
@property (retain, nonatomic) NSString *rapAbBranchId;
@property (retain, nonatomic) NSString *rapAbManifestVersion;
@property (retain, nonatomic) NSString *rapServerManifestVersion;


+(BOOL)isValid:(id)arg0 ;
+(Class)feedbackFieldOptionKeyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entryPointAsString:(int)arg0 ;
-(id)feedbackFieldOptionKeyAtIndex:(NSUInteger)arg0 ;
-(id)feedbackTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsEntryPoint:(id)arg0 ;
-(int)StringAsFeedbackType:(id)arg0 ;
-(void)addFeedbackFieldOptionKey:(id)arg0 ;
-(void)clearFeedbackFieldOptionKeys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif