// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBSHORTCUTSEDITOREVENTMETADATA_H
#define ATXPBSHORTCUTSEDITOREVENTMETADATA_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBShortcutsEditorEventMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumStepsInShortcut;
@property (nonatomic) unsigned int numStepsInShortcut; // ivar: _numStepsInShortcut


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif