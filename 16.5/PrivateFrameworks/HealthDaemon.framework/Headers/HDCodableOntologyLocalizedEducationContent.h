// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEONTOLOGYLOCALIZEDEDUCATIONCONTENT_H
#define HDCODABLEONTOLOGYLOCALIZEDEDUCATIONCONTENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableOntologyLocalizedEducationContent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionsAtIndex:(NSUInteger)arg0 ;
-(void)addSections:(id)arg0 ;
-(void)clearSections;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif