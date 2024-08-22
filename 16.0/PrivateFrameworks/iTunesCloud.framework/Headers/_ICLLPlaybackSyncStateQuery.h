// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLPLAYBACKSYNCSTATEQUERY_H
#define _ICLLPLAYBACKSYNCSTATEQUERY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying>

 {
    NSString *_currentItemId;
    NSString *_initialAVSyncStartItemId;
    NSMutableArray *_participantStates;
    NSMutableArray *_transportControlStates;
    BOOL _initialAVSyncInitiator;
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