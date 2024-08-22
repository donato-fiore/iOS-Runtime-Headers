// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIASYNCSERVICEKEEPLOCALREQUEST_H
#define NMSMEDIASYNCSERVICEKEEPLOCALREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "NMSMediaSyncServiceModelObject.h"
#import "NMSMediaSyncServiceKeepLocalOptions.h"

@interface NMSMediaSyncServiceKeepLocalRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int enableState; // ivar: _enableState
@property (nonatomic) BOOL hasEnableState;
@property (readonly, nonatomic) BOOL hasModelObject;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NMSMediaSyncServiceModelObject *modelObject; // ivar: _modelObject
@property (retain, nonatomic) NMSMediaSyncServiceKeepLocalOptions *options; // ivar: _options


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enableStateAsString:(int)arg0 ;
-(int)StringAsEnableState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif