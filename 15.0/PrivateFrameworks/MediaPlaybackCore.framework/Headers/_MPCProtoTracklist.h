// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPROTOTRACKLIST_H
#define _MPCPROTOTRACKLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MPCProtoTracklistIndexPath.h"

@interface _MPCProtoTracklist : PBCodable <NSCopying>

 {
    NSMutableArray *_accountInfos;
    NSMutableArray *_containers;
    int _shuffleMode;
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif