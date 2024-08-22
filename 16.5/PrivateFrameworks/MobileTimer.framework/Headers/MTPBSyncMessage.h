// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPBSYNCMESSAGE_H
#define MTPBSYNCMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MTPBDismissAction.h"
#import "MTPBSnoozeAction.h"

@interface MTPBSyncMessage : PBCodable <NSCopying>



@property (retain, nonatomic) MTPBDismissAction *dismissAction; // ivar: _dismissAction
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (retain, nonatomic) MTPBSnoozeAction *snoozeAction; // ivar: _snoozeAction
@property (nonatomic) CGFloat syncDate; // ivar: _syncDate
@property (retain, nonatomic) NSString *syncID; // ivar: _syncID
@property (nonatomic) CGFloat syncVersion; // ivar: _syncVersion


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