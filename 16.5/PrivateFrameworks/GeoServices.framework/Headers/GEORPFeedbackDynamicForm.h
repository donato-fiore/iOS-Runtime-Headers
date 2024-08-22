// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKDYNAMICFORM_H
#define GEORPFEEDBACKDYNAMICFORM_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackDynamicForm : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_abBranchId;
    NSString *_abManifestVersion;
    NSMutableArray *_formFields;
    NSMutableArray *_userPaths;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *abBranchId;
@property (retain, nonatomic) NSString *abManifestVersion;
@property (retain, nonatomic) NSMutableArray *formFields;
@property (readonly, nonatomic) BOOL hasAbBranchId;
@property (readonly, nonatomic) BOOL hasAbManifestVersion;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *userPaths;
@property (retain, nonatomic) NSString *version;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formFieldsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)userPathsAtIndex:(NSUInteger)arg0 ;
-(void)addFormFields:(id)arg0 ;
-(void)addUserPaths:(id)arg0 ;
-(void)clearFormFields;
-(void)clearUserPaths;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif