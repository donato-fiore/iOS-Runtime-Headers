// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEPBLOGWRAPPER_H
#define ATXMODEPBLOGWRAPPER_H

@class PBCodable;
@protocol NSCopying;


#import "ATXModePBRecord.h"

@interface ATXModePBLogWrapper : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasModeRecord;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) ATXModePBRecord *modeRecord; // ivar: _modeRecord
@property (nonatomic) int version; // ivar: _version


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