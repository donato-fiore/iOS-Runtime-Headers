// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBSETSECTIONINFOREQUEST_H
#define BLTPBSETSECTIONINFOREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "BLTPBSectionInfo.h"

@interface BLTPBSetSectionInfoRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasSectionInfo;
@property (retain, nonatomic) NSMutableArray *keypaths; // ivar: _keypaths
@property (retain, nonatomic) BLTPBSectionInfo *sectionInfo; // ivar: _sectionInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keypathsAtIndex:(NSUInteger)arg0 ;
-(void)addKeypaths:(id)arg0 ;
-(void)clearKeypaths;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif