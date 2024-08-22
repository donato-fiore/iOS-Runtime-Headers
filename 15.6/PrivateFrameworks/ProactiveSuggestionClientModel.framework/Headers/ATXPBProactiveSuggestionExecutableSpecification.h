// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPROACTIVESUGGESTIONEXECUTABLESPECIFICATION_H
#define ATXPBPROACTIVESUGGESTIONEXECUTABLESPECIFICATION_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *executable; // ivar: _executable
@property (retain, nonatomic) NSString *executableClassString; // ivar: _executableClassString
@property (retain, nonatomic) NSString *executableDescription; // ivar: _executableDescription
@property (retain, nonatomic) NSString *executableIdentifier; // ivar: _executableIdentifier
@property (nonatomic) NSUInteger executableObjectHash; // ivar: _executableObjectHash
@property (nonatomic) int executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasExecutable;
@property (readonly, nonatomic) BOOL hasExecutableClassString;
@property (readonly, nonatomic) BOOL hasExecutableDescription;
@property (readonly, nonatomic) BOOL hasExecutableIdentifier;
@property (nonatomic) BOOL hasExecutableObjectHash;
@property (nonatomic) BOOL hasExecutableType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)executableTypeAsString:(int)arg0 ;
-(int)StringAsExecutableType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif