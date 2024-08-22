// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBEXECUTABLEREFERENCEKEY_H
#define ATXPBEXECUTABLEREFERENCEKEY_H

@class PBCodable, ATXPBHeroAppPrediction, ATXPBInfoSuggestion, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXPBAction.h"
#import "ATXPBLinkAction.h"

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying>



@property (retain, nonatomic) ATXPBAction *executableAction; // ivar: _executableAction
@property (retain, nonatomic) ATXPBHeroAppPrediction *executableHeroApp; // ivar: _executableHeroApp
@property (retain, nonatomic) ATXPBInfoSuggestion *executableInfoSuggestion; // ivar: _executableInfoSuggestion
@property (retain, nonatomic) ATXPBLinkAction *executableLinkAction; // ivar: _executableLinkAction
@property (retain, nonatomic) NSString *executableString; // ivar: _executableString
@property (nonatomic) int executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasExecutableAction;
@property (readonly, nonatomic) BOOL hasExecutableHeroApp;
@property (readonly, nonatomic) BOOL hasExecutableInfoSuggestion;
@property (readonly, nonatomic) BOOL hasExecutableLinkAction;
@property (readonly, nonatomic) BOOL hasExecutableString;
@property (retain, nonatomic) NSMutableArray *references; // ivar: _references


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)executableTypeAsString:(int)arg0 ;
-(id)referencesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsExecutableType:(id)arg0 ;
-(void)addReferences:(id)arg0 ;
-(void)clearReferences;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif